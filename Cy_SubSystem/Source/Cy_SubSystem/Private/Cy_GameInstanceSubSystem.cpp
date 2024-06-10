// Fill out your copyright notice in the Description page of Project Settings.


#include "Cy_GameInstanceSubSystem.h"

// ------------------------------------------------
void UCy_GameInstanceSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	SubSystem_Init();
}
// ------------------------------------------------
void UCy_GameInstanceSubSystem::BeginDestroy()
{
	SubSystem_BeginDestroy();
	Super::BeginDestroy();
}