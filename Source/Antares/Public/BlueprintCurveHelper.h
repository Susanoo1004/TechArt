// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlueprintCurveHelper.generated.h"

UCLASS()
class ANTARES_API ABlueprintCurveHelper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlueprintCurveHelper();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
	FRuntimeFloatCurve SpawnDelayBySpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
