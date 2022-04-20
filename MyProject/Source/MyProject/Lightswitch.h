// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lightswitch.generated.h"

UCLASS()
class MYPROJECT_API ALightswitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightswitch();

	

protected:

	UPROPERTY(EditAnywhere, Category = Lightswitch)
	bool initialIsOn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Lightswitch)
	class UTextRenderComponent* textComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Lightswitch)
	UStaticMeshComponent* movableSwitch;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Lightswitch)
	//TSubclassOf<UStaticMeshComponent> testMesh;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Lightswitch)
	//TSubclassOf<UStaticMesh> testMesh2;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Interact();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Lightswitch, meta = (AllowPrivateAccess = "true", AllowedClasses = "StaticMeshComponent,SkeletalMeshComponent"))
	class UMeshComponent* StaticMesh;
};
