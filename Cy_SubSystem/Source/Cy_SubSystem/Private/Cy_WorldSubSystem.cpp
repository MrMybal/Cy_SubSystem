// Fill out your copyright notice in the Description page of Project Settings.


#include "Cy_WorldSubSystem.h"

// ------------------------------------------------
void UCy_WorldSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	SubSystem_Init();
}
// ------------------------------------------------
void UCy_WorldSubSystem::BeginDestroy()
{
	SubSystem_BeginDestroy();
	Super::BeginDestroy();
}