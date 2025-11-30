// Fill out your copyright notice in the Description page of Project Settings.


#include "PerformanceLogger.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/Paths.h"
#include "HAL/PlatformMemory.h"
#include "HAL/PlatformProcess.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/DateTime.h"

DEFINE_LOG_CATEGORY_STATIC(LogPerf, Log, All);

// Sets default values for this component's properties
UPerformanceLogger::UPerformanceLogger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UPerformanceLogger::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld() && LogFrequency > 0.0f)
	{
		// Record the start time of the session
		StartTime = FDateTime::Now().GetTimeOfDay().GetTotalSeconds();
        
		GetWorld()->GetTimerManager().SetTimer(
			LogTimerHandle, 
			this, 
			&UPerformanceLogger::CollectAndLogMetrics, 
			LogFrequency, 
			true // Loop
		);
		UE_LOG(LogPerf, Warning, TEXT("Performance logging started at %.2f second intervals."), LogFrequency);
	}
}

void UPerformanceLogger::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Write the log file when the session ends
	WriteLogToFile();
    
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(LogTimerHandle);
	}
    
	Super::EndPlay(EndPlayReason);
}

FString UPerformanceLogger::GetLogFilePath() const
{
    // Creates a unique filename for the session: Performance_YYYYMMDD_HHMMSS.json
    FString Timestamp = FDateTime::Now().ToString(TEXT("%Y%m%d_%H%M%S"));
    FString FileName = FString::Printf(TEXT("Performance_%s.json"), *Timestamp);
    
    return FPaths::ProjectSavedDir() / TEXT("PerformanceLogs") / FileName;
}

void UPerformanceLogger::CollectAndLogMetrics()
{
    FPerformanceMetrics Metrics;
    
    // --- 1. Timestamp ---
    Metrics.Timestamp = FDateTime::Now().GetTimeOfDay().GetTotalSeconds() - StartTime;

    // --- 2. FPS and Frame Time ---
    float DeltaTime = GetWorld()->GetDeltaSeconds();
    Metrics.FrameTime = DeltaTime * 1000.0f; // Convert seconds to ms
    Metrics.FPS = (DeltaTime > UE_SMALL_NUMBER) ? (1.0f / DeltaTime) : 0.0f;

    // --- 3. Memory Used ---
    FPlatformMemoryStats MemStats = FPlatformMemory::GetStats();
    Metrics.MemoryUsedMB = MemStats.UsedPhysical / (1024 * 1024); // Convert bytes to MB

    // --- 4. CPU Usage ---
	Metrics.CPUCycles = FPlatformTime::Cycles();

    LoggedData.Add(Metrics);
}

void UPerformanceLogger::WriteLogToFile()
{
    if (LoggedData.Num() == 0)
    {
        return;
    }
    
    FString OutputString;
    TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());
    TArray<TSharedPtr<FJsonValue>> MetricsArray;

    // Convert FPerformanceMetrics array to JSON array
    for (const FPerformanceMetrics& Metrics : LoggedData)
    {
        TSharedPtr<FJsonObject> MetricObject = MakeShareable(new FJsonObject());
        
        // Using descriptive field names
        MetricObject->SetNumberField(TEXT("Timestamp"), Metrics.Timestamp);
        MetricObject->SetNumberField(TEXT("Frame Time"), Metrics.FrameTime);
        MetricObject->SetNumberField(TEXT("FPS"), Metrics.FPS);
    	MetricObject->SetNumberField(TEXT("CPU Cycles"), (double)Metrics.CPUCycles);
        MetricObject->SetNumberField(TEXT("Memory Used"), Metrics.MemoryUsedMB);
        
        MetricsArray.Add(MakeShareable(new FJsonValueObject(MetricObject)));
    }
    
    RootObject->SetArrayField(TEXT("PerformanceData"), MetricsArray);

    // Serialize the root object
    TSharedRef<TJsonWriter<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>> Writer = 
        TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&OutputString);

    if (FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer))
    {
        FString FilePath = GetLogFilePath();
        
        // Ensure directory structure exists: [Project]/Saved/PerformanceLogs/
        IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
        FString Directory = FPaths::GetPath(FilePath);
        if (!PlatformFile.DirectoryExists(*Directory))
        {
            PlatformFile.CreateDirectoryTree(*Directory);
        }

        if (FFileHelper::SaveStringToFile(OutputString, *FilePath))
        {
            UE_LOG(LogPerf, Warning, TEXT("Performance Log SUCCESS: Saved %d data points to %s"), LoggedData.Num(), *FilePath);
        }
        else
        {
            UE_LOG(LogPerf, Error, TEXT("Performance Log FAILED to write file to: %s"), *FilePath);
        }
    }
}


