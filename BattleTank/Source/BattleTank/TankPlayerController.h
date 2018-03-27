// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public: 

	ATank* GetControlledTank() const;

	void BeginPlay() override;

	void Tick(float DeltaTime) override;

private:
	//Start the tank moving the barrle so the shot hits where the crosshair is.
	void AimTowardsCrosshair()
	
};
