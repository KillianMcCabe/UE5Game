// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameWidget.h"
#include "MyProjectGameMode.generated.h"

UCLASS(minimalapi)
class AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyProjectGameMode();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Test")
	float MyFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	TSubclassOf<UUserWidget> userWidget;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	//class UGameWidget* gameWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	class UGameWidget* gameWidget;

	virtual void BeginPlay() override;
};



