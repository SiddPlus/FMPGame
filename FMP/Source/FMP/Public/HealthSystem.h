#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthSystem.generated.h"

/**
 * @brief Delegate triggered when the health value changes.
 * @param HealthComp The health system component instance.
 * @param Health The new current health.
 * @param HealthDelta The amount of health changed (positive for healing, negative for damage).
 * @param DamageType The type of damage applied, if applicable.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChangedSignature, UHealthSystem*, HealthComp, float, Health, float, HealthDelta, const class UDamageType*, DamageType);

/**
 * @brief Component that manages an actor's health, damage intake, and healing.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API UHealthSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** @brief Sets default values for this component's properties */
	UHealthSystem();

	/** @brief Sets up property replication for networking */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	/** @brief Called when the game starts */
	virtual void BeginPlay() override;

	/** @brief The maximum health value the actor can have */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", Replicated)
	float MaxHealth = 100.0f;

	/** @brief The current health value of the actor */
	UPROPERTY(ReplicatedUsing=OnRep_Health, BlueprintReadOnly, Category = "Health")
	float CurrentHealth;

	// **Multiplayer:** Function called on clients when CurrentHealth is updated by the server
	/** 
	 * @brief Replication callback for CurrentHealth updates. 
	 * @param OldHealth The health value before the replication update.
	 */
	UFUNCTION()
	void OnRep_Health(float OldHealth);

	// Core damage/healing function (Server Only)
	/**
	 * @brief Internal handler for applying damage/healing logic.
	 * @param DamagedActor The actor taking damage.
	 * @param Damage The amount of damage.
	 * @param DamageType The type of damage.
	 * @param InstigatedBy The controller that caused the damage.
	 * @param DamageCauser The physical actor that caused the damage.
	 */
	UFUNCTION()
	void HandleHealthChange(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
public:	
	/** @brief Called every frame */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** @brief Event broadcasted when the health value changes */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHealthChangedSignature OnHealthChanged;

	/**
	 * @brief Decreases the actor's health.
	 * @param HealthDelta The amount of health to subtract.
	 * @param DamageType The type of damage causing the health decrease.
	 */
	UFUNCTION(BlueprintCallable, Category = "Health|Modification")
	void DecreaseHealth(float HealthDelta, const class UDamageType* DamageType);

	/**
	 * @brief Increases the actor's health.
	 * @param HealthDelta The amount of health to add.
	 */
	UFUNCTION(BlueprintCallable, Category = "Health|Modification")
	void IncreaseHealth(float HealthDelta);

	/** @brief Restores the actor's current health back to the maximum health */
	UFUNCTION(BlueprintCallable, Category = "Health|Modification")
	void RestoreFullHealth();

	/**
	 * @brief Updates the maximum health value.
	 * @param NewMax The new maximum health.
	 */
	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetMaxHealth(float NewMax);
};
