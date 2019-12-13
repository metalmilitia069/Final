// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubomon.generated.h"

UCLASS()
class FINALZ_API ACubomon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubomon();

	//ITEM9 and more
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cubo")/////
		class UBoxComponent* BoxTrigger;////

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cubo")////
		class UStaticMeshComponent* CuShape;///

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cubo")////
		class UStaticMeshComponent* CuHead;///

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cubo")////
		float HP;

	//ITEM9 and more

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ITEM9 and more
	UFUNCTION()/////
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult); ////

	UFUNCTION()/////
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);//////

		//FIM //ITEM9 and more

};
