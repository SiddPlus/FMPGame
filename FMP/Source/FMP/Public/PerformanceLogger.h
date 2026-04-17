#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerformanceData.h"
#include "PerformanceLogger.generated.h"


/**
 * @brief Component responsible for tracking and logging game performance metrics.
 * 
 * This component collects data such as frame rate and execution times, storing them
 * over the session and writing them to a log file upon session end.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API UPerformanceLogger : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** @brief Sets default values for this component's properties */
	UPerformanceLogger();

	/** @brief Sets the frequency for logging data in seconds (default: 0.5 seconds) */
	UPROPERTY(EditAnywhere, Category = "Performance")
	float LogFrequency = 0.5f;

protected:
	/** @brief Called when the game starts, initializes the performance logging timer */
	virtual void BeginPlay() override;

	/**
	 * @brief Called when the component is being destroyed or the game ends.
	 * @param EndPlayReason The reason why the component is ending play.
	 */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	/** @brief Handle for the timer that periodically triggers metric collection */
	FTimerHandle LogTimerHandle;
	
	/** @brief Array of all collected performance metric snapshots */
	TArray<FPerformanceMetrics> LoggedData;
	
	/** @brief Timestamp of when the performance logging began */
	float StartTime;

	/** @brief Collects the current performance metrics and appends them to LoggedData */
	void CollectAndLogMetrics();
	
	/** @brief Flushes all collected performance data to a file on disk */
	void WriteLogToFile();
	
	/**
	 * @brief Retrieves the absolute file path where the log should be saved.
	 * @return The file path string.
	 */
	FString GetLogFilePath() const;
};
