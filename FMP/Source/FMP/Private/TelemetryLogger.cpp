// Fill out your copyright notice in the Description page of Project Settings.


#include "TelemetryLogger.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/Paths.h"
#include "PlayerPerks.h"

DEFINE_LOG_CATEGORY_STATIC(LogTelemetry, Log, All);

// --- 1. Static Filename ---
FString TelemetryLogger::GetLogFilePath()
{
    // Uses a fixed filename for the player's profile/max stats
    const FString FileName = TEXT("PlayerProfileStats.json");
    return FPaths::ProjectSavedDir() / TEXT("Telemetry") / FileName;
}

bool TelemetryLogger::RecordSessionData(
    int32 CurrentRoundNumber, 
    const TArray<FPerks>& UnlockedPerks)
{
    FString FilePath = GetLogFilePath();
    FString ExistingContent;
    
    // This object will hold the final stats, either loaded or newly created
    TSharedPtr<FJsonObject> LogObject = MakeShareable(new FJsonObject()); 

    // --- 2. Try to READ Existing File and Deserialize into a Single Object ---
    if (FFileHelper::LoadFileToString(ExistingContent, *FilePath) && !ExistingContent.IsEmpty())
    {
        TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<TCHAR>::Create(ExistingContent);
        
        // Deserialize the file into the LogObject
        if (!FJsonSerializer::Deserialize(Reader, LogObject))
        {
            // If deserialization fails (e.g., file corrupted), LogObject remains empty.
            UE_LOG(LogTelemetry, Warning, TEXT("Existing stat file found but format is invalid. Starting new profile stat file."));
            // Re-initialize LogObject as an empty valid object just in case
            LogObject = MakeShareable(new FJsonObject());
        }
    }
    
    // --- 3. Determine Max Rounds Survived Logic ---
    int32 ExistingMaxRounds = 0;
    
    // Read existing max rounds, defaulting to 0 if the field is missing or invalid
    if (LogObject->HasField(TEXT("MaxRoundsSurvived")))
    {
        ExistingMaxRounds = LogObject->GetNumberField(TEXT("MaxRoundsSurvived"));
    }
    
    // Only update if the current round beats the existing maximum
    if (CurrentRoundNumber > ExistingMaxRounds)
    {
        LogObject->SetNumberField(TEXT("MaxRoundsSurvived"), CurrentRoundNumber);
        UE_LOG(LogTelemetry, Warning, TEXT("New Max Rounds Survived recorded: %d"), CurrentRoundNumber);
    } 
    else 
    {
        // Preserve the existing max if the current round was not higher
        LogObject->SetNumberField(TEXT("MaxRoundsSurvived"), ExistingMaxRounds);
    }
    
    // --- 4. Overwrite Unlocked Perks Array ---
    TArray<TSharedPtr<FJsonValue>> PerksArray;
    for (const FPerks& Perk : UnlockedPerks)
    {
        TSharedPtr<FJsonObject> PerkObject = MakeShareable(new FJsonObject());
        PerkObject->SetStringField(TEXT("Name"), Perk.Name);
        PerkObject->SetStringField(TEXT("Description"), Perk.Description);
        PerkObject->SetNumberField(TEXT("UnlockRound"), Perk.RoundLevelUnlockAmount);
        PerksArray.Add(MakeShareable(new FJsonValueObject(PerkObject)));
    }
    
    // Overwrite the array field entirely with the current, full list
    LogObject->SetArrayField(TEXT("UnlockedPerks"), PerksArray);

    // --- 5. Serialize the Single Object back to String ---
    FString OutputString;
    TSharedRef<TJsonWriter<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>> Writer = 
        TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&OutputString);

    if (FJsonSerializer::Serialize(LogObject.ToSharedRef(), Writer))
    {
        // Ensure the directory structure exists
        IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
        FString Directory = FPaths::GetPath(FilePath);
        if (!PlatformFile.DirectoryExists(*Directory))
        {
            PlatformFile.CreateDirectoryTree(*Directory);
        }

        // --- 6. Overwrite File ---
        if (FFileHelper::SaveStringToFile(OutputString, *FilePath))
        {
            UE_LOG(LogTelemetry, Warning, TEXT("Player Profile Stat File Updated: %s"), *FilePath);
            return true;
        }
        else
        {
            UE_LOG(LogTelemetry, Error, TEXT("Player Profile Stat File FAILED to write file to: %s"), *FilePath);
        }
    }
    else
    {
        UE_LOG(LogTelemetry, Error, TEXT("Player Profile Stat File FAILED to serialize JSON object."));
    }
    
    return false;
}

