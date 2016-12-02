// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleOfShips.h"
#include "ShipBase.h"


// Sets default values
AShipBase::AShipBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//GetWorldTimerManager().SetTimer(SpawnTimer, this, )

	//CompMovement = CreateDefaultSubobject<UShipCompMovement>(TEXT("MOVE MENT"));
}

// Called when the game starts or when spawned
void AShipBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AShipBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

