// Fill out your copyright notice in the Description page of Project Settings.

#include "kiwi_camera_follow.h"
#include "SplineFollowActor.h"


// Sets default values
ASplineFollowActor::ASplineFollowActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplineFollowActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplineFollowActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

