// Fill out your copyright notice in the Description page of Project Settings.


#include "Lightswitch.h"
#include <Components/TextRenderComponent.h>

// Sets default values
ALightswitch::ALightswitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	textComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	// Create mesh component
	movableSwitch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovableSwitch"));
	// Load the Cube mesh
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	// Set the component's mesh
	movableSwitch->SetStaticMesh(cubeMesh);
}

// Called when the game starts or when spawned
void ALightswitch::BeginPlay()
{
	Super::BeginPlay();
	
	Interact();
}

void ALightswitch::Interact()
{
	FVector loc = FVector(166.0f, 0.0f, 0.0f);

	FRotator onRot = FRotator(166.0f, 0.0f, 0.0f);
	FRotator offRot = FRotator(196.0f, 0.0f, 0.0f);

	movableSwitch->SetRelativeRotation(onRot);
}

// Called every frame
void ALightswitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

