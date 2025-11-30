// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerformanceData.h"
#include "PerformanceLogger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API UPerformanceLogger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPerformanceLogger();

	// Sets the frequency for logging data (default: 0.5 seconds)
	UPROPERTY(EditAnywhere, Category = "Performance")
	float LogFrequency = 0.5f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	FTimerHandle LogTimerHandle;
	TArray<FPerformanceMetrics> LoggedData;
	float StartTime;

	void CollectAndLogMetrics();
	void WriteLogToFile();
	FString GetLogFilePath() const;
};
