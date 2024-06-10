// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Cy_LocalSubSystem.generated.h"


UCLASS(Blueprintable, abstract)
class CY_SUBSYSTEM_API UCy_LocalSubSystem : public ULocalPlayerSubsystem
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
