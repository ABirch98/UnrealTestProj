// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "DeathFloor.generated.h"

UCLASS()
class SIDESCROLLTEST_API ADeathFloor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADeathFloor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//A Box component used to detect when overlap events occur
	UPROPERTY(EditAnywhere)
		class UBoxComponent* HitBox;
	//To be used as a root component
	UPROPERTY(EditAnywhere)
		class USceneComponent* Root;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
