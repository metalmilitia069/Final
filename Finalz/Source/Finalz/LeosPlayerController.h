// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LeosPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FINALZ_API ALeosPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	//ITEM1

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "widgets")////
	//TSubclassOf<class UUserWidget> HUDAsset;////
		TSubclassOf<class ULeosUserWidget> HUDAsset;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "widgets")////
		ULeosUserWidget* HUDOverlay;///
		//UUserWidget* HUDOverlay;

	APawn* PlayRef;

	//FIM //ITEM1

protected:
	//ITEM1
	virtual void BeginPlay() override;/////
	//FIM //ITEM1
	
};
