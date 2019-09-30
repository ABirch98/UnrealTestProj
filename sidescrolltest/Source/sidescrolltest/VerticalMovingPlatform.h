// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "VerticalMovingPlatform.generated.h"

UCLASS()
class SIDESCROLLTEST_API AVerticalMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVerticalMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		class USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Platform;

	UPROPERTY(EditAnywhere, category = "Movement")
	int Direction{ 1 };

	UPROPERTY(EditAnywhere, category = "Movement")
	int MovementSpeed{ 100 };

	UPROPERTY(EditAnywhere, category = "Movement")
		int MinPosition{ 0 };

	UPROPERTY(EditAnywhere, category = "Movement")
		int MaxPosition{ 0 };

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
