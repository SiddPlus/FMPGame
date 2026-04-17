#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "FMPCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

class UHealthSystem;
class UPlayerPerks;
class ULootPool;


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 * @brief A simple player-controllable third person character
 * 
 * Implements a controllable orbiting camera and manages the player's health,
 * perks, and loot systems.
 */
UCLASS(abstract)
class AFMPCharacter : public ACharacter
{
	GENERATED_BODY()

	/** @brief Component that manages the character's health, damage, and healing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player", meta = (AllowPrivateAccess = "true"))
	UHealthSystem* PlayerHealth;

	/** @brief Component that manages the character's unlocked and equipped perks */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player", meta = (AllowPrivateAccess = "true"))
	UPlayerPerks* PlayerPerks;

	/** @brief Component that provides a randomized pool of perks for the player to draw from */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player", meta = (AllowPrivateAccess = "true"))
	ULootPool* LootPool;

	/** @brief Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** @brief Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
protected:

	/** @brief Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** @brief Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** @brief Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

public:

	/** @brief Default Constructor */
	AFMPCharacter();	

protected:

	/**
	 * @brief Initialize input action bindings
	 * @param PlayerInputComponent The input component to bind to
	 */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	/**
	 * @brief Called for movement input
	 * @param Value The input value
	 */
	void Move(const FInputActionValue& Value);

	/**
	 * @brief Called for looking input
	 * @param Value The input value
	 */
	void Look(const FInputActionValue& Value);

public:

	/**
	 * @brief Handles move inputs from either controls or UI interfaces
	 * @param Right The right movement value
	 * @param Forward The forward movement value
	 */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/**
	 * @brief Handles look inputs from either controls or UI interfaces
	 * @param Yaw The yaw rotation value
	 * @param Pitch The pitch rotation value
	 */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

public:

	/** @brief Returns the CameraBoom subobject */
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** @brief Returns the FollowCamera subobject */
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** @brief Returns the HealthSystem subobject */
	FORCEINLINE UHealthSystem* GetHealthSystem() const { return PlayerHealth; }

	/** @brief Returns the PlayerPerks subobject */
	FORCEINLINE UPlayerPerks* GetPlayerPerks() const { return PlayerPerks; }

	/** @brief Returns the LootPool subobject */
	FORCEINLINE ULootPool* GetLootPool() const { return LootPool; }
	
};

