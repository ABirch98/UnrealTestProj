// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	PlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Platfrom Root"));
	RootComponent = PlatformRoot;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platorm Mesh"));
	PlatformMesh->AttachToComponent(PlatformRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if ((GetActorLocation().X <= 900.f) && Direction == 1)
	{
		Direction = 0;
		MovementSpeed = 100;
	}
	if (GetActorLocation().X >= 1500 && Direction == 0)
	{
		Direction = 1;
		MovementSpeed = -100;
	}
	FVector NewLocation = GetActorLocation();
	NewLocation.X += MovementSpeed * DeltaTime;
	SetActorLocation(NewLocation);

}

