// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "RoadMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement,meta = (BlueprintSpawnableComponent))
class RUNNER_API URoadMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	UPROPERTY()
	FHitResult tickMoveHit;

	URoadMovementComponent(const FObjectInitializer& ObjectInitializer);
	
	
	
	
};
