// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement, meta = (BlueprintSpawnableComponent))
class RUNNER_API UMyCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	//UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	void BeginPlay();
protected:
	/** @note Movement update functions should only be called through StartNewPhysics()*/
	//virtual void PhysWalking(float deltaTime, int32 Iterations) override;

	virtual void UpdateBasedMovement(float DeltaSeconds) override;

	UPROPERTY()
		FTransform OriginalTransform;
	
	
};
