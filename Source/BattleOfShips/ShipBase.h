// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ShipCompMoveMent.h"
#include "ShipBase.generated.h"

UCLASS()
class BATTLEOFSHIPS_API AShipBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

protected:
	//UPROPERTY(VisibleAnywhere, Blueprintable, Category = "ShipComp", meta = (AllowPrivateAccess = "true"))
	//class UShipCompMovement* CompMovement;
};
