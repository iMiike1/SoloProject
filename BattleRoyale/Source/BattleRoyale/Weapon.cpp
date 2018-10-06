// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWeapon::AWeapon()
{

	// Create a gun mesh component
	//WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	//WeaponMesh->SetOnlyOwnerSee(false); //Not only the player owner will see this weapon
	//WeaponMesh->bCastDynamicShadow = false;
	//WeaponMesh->CasShadow = false;
	//WeaponMesh->SetupAttachment(RootComponent);


 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

