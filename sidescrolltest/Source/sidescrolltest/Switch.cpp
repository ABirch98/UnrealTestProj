// Fill out your copyright notice in the Description page of Project Settings.


#include "Switch.h"
#include "Components/InputComponent.h"

ASwitch::ASwitch()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	SwitchRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchRoot"));
	RootComponent = SwitchRoot;
	MeshBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBody"));
	MeshBody->AttachToComponent(SwitchRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	SwitchBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SwitchBox"));
	SwitchBox->AttachToComponent(SwitchRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	SwitchBox->SetWorldScale3D(FVector(3.0f, 4.0f, 3.0f));
	SwitchBox->SetCollisionProfileName(TEXT("Trigger"));

	
}

void ASwitch::BeginPlay()
{
	Super::BeginPlay();
}

void ASwitch::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	

	if (this->isActive == true)
	{
		OldLocation = MeshBody->GetComponentLocation();
		FVector NewLocation = OldLocation;
		NewLocation.Y += MovementAmount;
		MeshBody->SetWorldLocation(NewLocation);
	}
	isActive = false;
	

}

void ASwitch::Activate()
{
	isActive = true;
}

