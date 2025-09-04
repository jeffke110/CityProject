// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySystem/Items/Money.h"

AMoney::AMoney()
{
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;
}
void AMoney::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMoney::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator NewRotation = GetActorRotation() + (RotationSpeed * DeltaTime);
	SetActorRotation(NewRotation);
	
}
