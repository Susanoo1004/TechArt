// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintCurveHelper.h"

// Sets default values
ABlueprintCurveHelper::ABlueprintCurveHelper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnDelayBySpeed.EditorCurveData.AddKey(0.f, 0.f);
	SpawnDelayBySpeed.EditorCurveData.AddKey(1.f, 1.f);
}

// Called when the game starts or when spawned
void ABlueprintCurveHelper::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlueprintCurveHelper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
