// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Pawn.h"
#include "VRFPSPawn.generated.h"

UCLASS()
class VRFPSPROTOTYPE_API AVRFPSPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRFPSPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	void MoveForward(float Val);
	void MoveRight(float Val);

	void HandleRotation(float Val);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UPawnMovementComponent* ThisMovementComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
