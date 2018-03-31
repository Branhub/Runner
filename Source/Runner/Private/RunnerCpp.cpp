// Fill out your copyright notice in the Description page of Project Settings.

#include "RunnerCpp.h"
#include "MyCharacterMovementComponent.h"

//FName ARunnerCpp::ACharacter::CharacterMovementComponentName(TEXT(""));

// Sets default values
ARunnerCpp::ARunnerCpp(const class FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UMyCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARunnerCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARunnerCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARunnerCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

