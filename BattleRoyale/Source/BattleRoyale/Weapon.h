// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class BATTLEROYALE_API AWeapon : public AActor
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	AWeapon();
	
	// Projectile Class To Spawn
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		//TSubclassOf<class AMasteringProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase * FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float Damage = 0.0f;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
