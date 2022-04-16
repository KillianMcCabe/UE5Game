// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameMode.h"
#include "MyProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include <string>
#include "Blueprint/UserWidget.h"

AMyProjectGameMode::AMyProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AMyProjectGameMode::BeginPlay()
{
	float test = MyFloat;
	UE_LOG(LogTemp, Log, TEXT("ok %f"), test);

	if (IsValid(userWidget))
	{
		//UUserWidget* widget = CreateWidget(GetWorld(), userWidget);
		//widget->AddToViewport();

		gameWidget = Cast<UGameWidget>(CreateWidget(GetWorld(), userWidget));
		if (gameWidget != nullptr)
		{
			gameWidget->AddToViewport();
			UE_LOG(LogTemp, Log, TEXT("Widget created"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("gameWidget is nullptr"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameWidget is invalid"));
	}
}
