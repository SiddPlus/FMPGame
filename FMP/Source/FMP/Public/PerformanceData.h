#pragma once

#include "CoreMinimal.h"
#include "PerformanceData.generated.h"

/**
 * @brief Structure containing a snapshot of various game performance metrics.
 */
USTRUCT()
struct FPerformanceMetrics
{
	GENERATED_BODY()

public: 
    
	/** @brief Time elapsed since logging started (in seconds) */
	UPROPERTY()
	float Timestamp = 0.0f;
    
	/** @brief Frame rendering time (in milliseconds) */
	UPROPERTY()
	float FrameTime = 0.0f;
    
	/** @brief Current frames per second */
	UPROPERTY()
	float FPS = 0.0f;
    
	/** @brief Cumulative CPU cycles used by the process (in seconds representation if applicable) */
	UPROPERTY()
	uint64 CPUCycles = 0;
    
	/** @brief Resident memory used by the process (in MB) */
	UPROPERTY()
	int64 MemoryUsedMB = 0;
};
