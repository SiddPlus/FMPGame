#pragma once

#include "CoreMinimal.h"
#include "PlayerPerks.h"

/**
 * @brief Utility class responsible for logging game telemetry and session data.
 */
class FMP_API TelemetryLogger
{
public:
	/**
	 * @brief Records the data for the current session to a log file.
	 * @param CurrentRoundNumber The round number the players reached.
	 * @param UnlockedPerks The array of perks unlocked by players during the session.
	 * @return True if the session data was successfully recorded, false otherwise.
	 */
	static bool RecordSessionData(
		int32 CurrentRoundNumber, 
		const TArray<FPerks>& UnlockedPerks
	);

private:
	/**
	 * @brief Retrieves the file path where the telemetry log should be saved.
	 * @return A string containing the absolute file path for the log file.
	 */
	static FString GetLogFilePath(); 
};
