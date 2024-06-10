// Fill out your copyright notice in the Description page of Project Settings.


#include "Cy_LocalSubSystem.h"

// ------------------------------------------------
void UCy_LocalSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	SubSystem_Init();
}
// ------------------------------------------------
void UCy_LocalSubSystem::BeginDestroy()
{
	SubSystem_BeginDestroy();
	Super::BeginDestroy();
}