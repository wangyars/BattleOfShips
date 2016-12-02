// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShipComponentBase.h"
#include "ShipCompMovement.generated.h"

/**
 *
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLEOFSHIPS_API UShipCompMovement : public UShipComponentBase
{
	GENERATED_BODY()

public:

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "ShipMovement")
		void SetSpeedMax(float Speed);

	UFUNCTION(BlueprintCallable, Category = "ShipMovement")
		void SetTapPosition(int TapPos);

protected:
	// Timer to change crtSpeed
	FTimerHandle SpawnTimer;

	// The max speed this ship can move
	UPROPERTY(EditAnyWhere, Category = "ShipMovement")
		float SpeedMax;

	UPROPERTY(EditAnyWhere, Category = "ShipMovement")
		float Acceleration;

	// TapPosition
	UPROPERTY(VisibleAnywhere, Category = "ShipMovement")
		int TapPosition;


private:
	UPROPERTY(VisibleAnywhere, Category = "ShipMovement")
		float SpeedCrt;

	UPROPERTY(VisibleAnywhere, Category = "ShipMovement")
		bool IsMoving;

	UPROPERTY(VisibleAnywhere, Category = "ShipMovement")
		bool IsMoveForward;
};
