// Fill out your copyright notice in the Description page of Project Settings.


#include "LeosPlayerController.h"
#include "LeosUserWidget.h"////
#include "FinalzCharacter.h"///
#include "Kismet/GameplayStatics.h"///
#include "Blueprint/UserWidget.h" //////

//ITEM1
void ALeosPlayerController::BeginPlay()
{
	

	//ITEM1

	Super::BeginPlay();

	if (HUDAsset)///
	{

		HUDOverlay = CreateWidget<ULeosUserWidget>(this, HUDAsset);
		HUDOverlay->AddToViewport();
		HUDOverlay->SetVisibility(ESlateVisibility::Visible);

		PlayRef = UGameplayStatics::GetPlayerPawn(this, 0);
		HUDOverlay->player = Cast<AFinalzCharacter>(PlayRef);
	}

	//FIM ITEM 1


}