// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	//auto ControlledTank = GetControlledTank();
	auto PlayerTank = GetPlayerTank();

	//if (!ControlledTank)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("TankAIController not possesing a tank"));

	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("TankAIController possesing: %s"), *ControlledTank->GetName());
	//}

	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("TankAIController did not find player tank"));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TankAIController aiming at: %s"), *PlayerTank->GetName());
	}
	//UE_LOG(LogTemp, Warning, TEXT("Tank AI Controller: Begin Play called"));
}


ATank* ATankAIController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();

	return Cast<ATank>(PlayerTank);
}
