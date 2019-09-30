// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathFloor.h"

// Sets default values
ADeathFloor::ADeathFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//sets the created sceneobject as the root object of the actor
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	//

	//sets the created Boxcomponent up, attaches to the rootobject and provides a name for the collision profile
	HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
	HitBox->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	HitBox->SetCollisionProfileName(TEXT("DeathHB"));
	//
}

// Called when the game starts or when spawned
void ADeathFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

