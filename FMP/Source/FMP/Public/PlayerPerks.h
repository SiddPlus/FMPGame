// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPerks.generated.h"

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
	void EquipPerk(const FString& PerkName);

private:
	UFUNCTION(Server, Reliable)
	void ServerUnlockPerk(const FString& PerkName);
	
	UFUNCTION(Server, Reliable)
	void ServerEquipPerk(const FString& PerkName);
	
	bool PerkUnlockLogic(const FString& PerkName);

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
