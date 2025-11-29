// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerPerks.h"

/**
 * 
 */
class FMP_API TelemetryLogger
{
public:
	static bool RecordSessionData(
		int32 CurrentRoundNumber, 
		const TArray<FPerks>& UnlockedPerks
	);

private:
	static FString GetLogFilePath(); 
};
