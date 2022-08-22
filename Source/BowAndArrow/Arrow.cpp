// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"

// Sets default values
AArrow::AArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));

	// 화살표 메쉬
	static ConstructorHelpers::FObjectFinder<UStaticMeshComponent> ArrowMesh(TEXT("StaticMesh'/Game/Assets/Arrow/Arrow.Arrow'"));

	if (ArrowMesh.Succeeded)
	{
		Mesh->SetStaticMesh(ArrowMesh.Object);
	}

}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

