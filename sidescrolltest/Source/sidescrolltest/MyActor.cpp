// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TextRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TextRoot"));
	RootComponent = TextRoot;

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	Text->AttachToComponent(TextRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	Text->SetVisibility(false);

	HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
	HitBox->AttachToComponent(TextRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	HitBox->SetWorldScale3D(FVector(3.0f, 2.0f, 3.0f));
	HitBox->SetCollisionProfileName(TEXT("Trigger2.0"));

	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AMyActor::OnOverlapStart);
	HitBox->OnComponentEndOverlap.AddDynamic(this, &AMyActor::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::OnOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Text->SetVisibility(true);
}

void AMyActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Text->SetVisibility(false);
}
