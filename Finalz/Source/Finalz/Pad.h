// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pad.generated.h"

UCLASS()
class FINALZ_API APad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APad();

	//ITEM4
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pad")/////
    class UBoxComponent* BoxTrigger;////

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pad")////
   class UStaticMeshComponent* PadShape;///


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)/////
    FVector impulse;//////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)/////
	float ForwardMultiplier;//////


	

	//FIM //ITEM4

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//ITEM4
	UFUNCTION()/////
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult); ////

	UFUNCTION()/////
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);//////

	//FIM //ITEM4

};
