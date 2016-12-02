// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleOfShips.h"
#include "ShipCompMovement.h"


// Called when the game starts
void UShipCompMovement::BeginPlay()
{
	Super::BeginPlay();

	IsMoving = true;
	IsMoveForward = true;
	SpeedMax = 100.f;
	Acceleration = 10.f;
	TapPosition = 1;
}

// Called every frame
void UShipCompMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsMoving)
	{
		float TargetSpeed = SpeedMax * TapPosition;
		if (IsMoveForward)
		{
			if (SpeedCrt < TargetSpeed)
			{
				SpeedCrt += DeltaTime * Acceleration;
			}
			else
			{
				SpeedCrt = TargetSpeed;
				IsMoving = false;
			}
		}
		else
		{
			if (SpeedCrt > TargetSpeed)
			{
				SpeedCrt -= DeltaTime * Acceleration;
			}
			else
			{
				SpeedCrt = TargetSpeed;
				IsMoving = false;
			}
		}
	}
	if (SpeedCrt != 0)
	{
		//GetDefaultsubobject
		AActor* Owner = GetOwner();
		FVector CurrentLocation = Owner->GetActorLocation();
		CurrentLocation.Y -= DeltaTime * SpeedCrt;
		Owner->SetActorLocation(CurrentLocation);
	}
}


void UShipCompMovement::SetSpeedMax(float Speed)
{
	SpeedMax = Speed;
}

void UShipCompMovement::SetTapPosition(int Pos)
{
	if (TapPosition != Pos)
	{
		TapPosition = Pos;
		IsMoving = true;
		IsMoveForward = Pos > TapPosition;
	}
}


