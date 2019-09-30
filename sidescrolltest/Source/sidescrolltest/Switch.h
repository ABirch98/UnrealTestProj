#pragma once
#include "Classes/Components/ShapeComponent.h"
#include "Classes/Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Switch.generated.h"



UCLASS()
class SIDESCROLLTEST_API ASwitch : public AActor
{
	GENERATED_BODY()
public:
	ASwitch();
	virtual void Tick(float DeltaSeconds) override;
	void Activate();
protected:
	FVector OldLocation;

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, category = "Movement")
		float MovementAmount{ 35.f };

	//the static mesh for the component
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* MeshBody;

	UPROPERTY(EditAnywhere)
		class USceneComponent* SwitchRoot;

	UPROPERTY(EditAnywhere)
		class UBoxComponent* SwitchBox;

	UPROPERTY(VisibleAnywhere, category = "Active")
		bool isActive{ false };
};
