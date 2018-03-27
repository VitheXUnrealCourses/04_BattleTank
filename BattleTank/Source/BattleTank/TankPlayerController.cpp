// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"))

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing: %s"),*ControlledTank->GetName())
	}
	//UE_LOG(LogTemp,Warning,TEXT("Tank Player Controller: Begin Play called"))
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("TankPlayerController ticking."));
}


ATank* ATankPlayerController::GetControlledTank() const
{
	
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }
	//get world location if linecast through crosshair
	//
}

