// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Cy_WorldSubSystem.generated.h"


UCLASS(Blueprintable, abstract)
class CY_SUBSYSTEM_API UCy_WorldSubSystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Cy_SubSystem")
	void SubSystem_Init();

	UFUNCTION(BlueprintImplementableEvent, Category = "Cy_SubSystem")
	void SubSystem_BeginDestroy();
};
