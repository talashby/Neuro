// Fill out your copyright notice in the Description page of Project Settings.

#include "God.h"
#include "Runtime/Engine/Public/DrawDebugHelpers.h"

// Sets default values
AGod::AGod()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGod::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugLine(GetWorld(), FVector(0, 0, 0), FVector(1000, 1000, 1000), FColor::Yellow, false, -1.0f, 0, 10);
}

// Called to bind functionality to input
void AGod::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

