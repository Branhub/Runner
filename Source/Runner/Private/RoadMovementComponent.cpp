// Fill out your copyright notice in the Description page of Project Settings.

#include "RoadMovementComponent.h"

URoadMovementComponent::URoadMovementComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	tickMoveHit = FHitResult();
}

void URoadMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	UMovementComponent::TickComponent(DeltaTime,TickType,ThisTickFunction);

	UE_LOG(LogTemp,Log,TEXT("aaaaaaaaa"));

	if (UpdatedComponent != nullptr && UpdatedComponent->IsPendingKill())
	{
		SafeMoveUpdatedComponent(FVector(Velocity.X * DeltaTime,Velocity.Y * DeltaTime,Velocity.Z*DeltaTime),UpdatedComponent->GetComponentRotation(),false,tickMoveHit);
	}
}




