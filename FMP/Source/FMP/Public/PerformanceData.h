// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PerformanceData.generated.h"

USTRUCT()
struct FPerformanceMetrics
{
	GENERATED_BODY()

public: 
    
	UPROPERTY()
	float Timestamp = 0.0f; // Time elapsed since logging started (in seconds)
    
	UPROPERTY()
	float FrameTime = 0.0f; // Frame rendering time (in milliseconds)
    
	UPROPERTY()
	float FPS = 0.0f;
    
	UPROPERTY()
	uint64 CPUCycles = 0; // Cumulative CPU time used by the process (in seconds)
    
	UPROPERTY()
	int64 MemoryUsedMB = 0; // Resident memory used by the process (in MB)
};
