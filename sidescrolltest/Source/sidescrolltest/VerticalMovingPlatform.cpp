// Fill out your copyright notice in the Description page of Project Settings.


#include "VerticalMovingPlatform.h"

// Sets default values
AVerticalMovingPlatform::AVerticalMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	Platform->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

// Called when the game starts or when spawned
void AVerticalMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVerticalMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if ((GetActorLocation().Z >= 750.f) && Direction == 1)
	{
		Direction = 0;
		MovementSpeed = -100;
	}
	if (GetActorLocation().Z <= 355.f && Direction == 0)
	{
		Direction = 1;
		MovementSpeed = 100;
	}
	FVector NewLocation = GetActorLocation();
	NewLocation.Z += MovementSpeed * DeltaTime;
	SetActorLocation(NewLocation);

}

