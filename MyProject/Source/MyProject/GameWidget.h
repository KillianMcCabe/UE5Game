// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class UGameWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	// Doing setup in the C++ constructor is not as
	// useful as using NativeConstruct.
	virtual void NativeConstruct() override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test", meta=(BindWidget))
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	//UPROPERTY(BlueprintReadWrite, Category = "Test", meta = (BindWidget))
	//class UTextBlock* textLabel;
	
};
