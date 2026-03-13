// Fill out your copyright notice in the Description page of Project Settings.


#include "TheGameState.h"
#include "PerformanceLogger.h"

ATheGameState::ATheGameState()
{
	PrimaryActorTick.bCanEverTick = true;

	PerformanceLogger = CreateDefaultSubobject<UPerformanceLogger>(TEXT("PerformanceLogger"));
}

