// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class SIDESCROLLTEST_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* PlatformMesh;
	UPROPERTY(EditAnywhere)
		class USceneComponent* PlatformRoot;

	//Starting Direction 
	UPROPERTY(EditAnywhere, category = "Movement")
	int Direction{ 1 };


	//Movement Speed 
	UPROPERTY(EditAnywhere, category = "Movement")
	int MovementSpeed{ -100 };

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
