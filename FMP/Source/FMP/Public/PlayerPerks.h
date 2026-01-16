// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerks.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerkSelectionNeeded, bool, IsActive);

USTRUCT(BlueprintType)
struct FPerks
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	TSubclassOf<class UPerkEffectBase> PerkEffectClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perk Details")
	int32 RoundLevelUnlockAmount = 0;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FMP_API UPlayerPerks : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerPerks();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	void UnlockPerk(const FString& PerkName);
	
	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	bool EquipPerk(const FString& PerkName);

	UFUNCTION(BlueprintCallable, Category = "Perk Functions")
	void CheckAndUnlockPerks(int32 CurrentRound); 

	UPROPERTY(BlueprintAssignable, Category = "Perk UI")
	FOnPerkSelectionNeeded OnPerkSelectionNeeded; 

	UFUNCTION(BlueprintPure, Category = "Perk UI")
	bool IsPerkSelectionActive() const { return bIsPerkSelectionActive; }

	UFUNCTION(BlueprintCallable, Category = "Perk UI")
	void FinishedPerkSelection();

	UPROPERTY(ReplicatedUsing = OnRep_IsPerkSelectionActive, BlueprintReadOnly, Category = "Perk UI")
	bool bIsPerkSelectionActive = false;

private:
	UFUNCTION(Server, Reliable)
	void ServerUnlockPerk(const FString& PerkName);
	
	UFUNCTION(Server, Reliable)
	void ServerEquipPerk(const FString& PerkName);
	
	bool PerkUnlockLogic(const FString& PerkName);

	UFUNCTION(Server, Reliable)
	void ServerFinishedPerkSelection();
    
	UFUNCTION()
	void OnRep_IsPerkSelectionActive();
    
	bool CheckUnlockLogic(int32 CurrentRound);

public:
	bool PerkEquipLogic(const FString& PerkName); 
	
	UPROPERTY(ReplicatedUsing=OnRep_LastEquippedPerk, BlueprintReadOnly, Category = "Perks|Client")
	FPerks LastEquippedPerk;
	
	UFUNCTION()
	void OnRep_LastEquippedPerk();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Perk UI")
	void OnPerkEquipped_ClientEvent(const FPerks& NewPerk);
    
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> LockedPerks;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> UnlockedPerks;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Perks")
	TArray<FPerks> EquippedPerks;
};
