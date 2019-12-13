// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LeosPlayerController.h"///
#include "LeosUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class FINALZ_API ULeosUserWidget : public UUserWidget
{
	GENERATED_BODY()

//ITEM1
public:

	UPROPERTY(BlueprintReadOnly)////
		class AFinalzCharacter* player;/////
		/*player = UGameplayStatics::GetPlayerController(this, 0);*/

		//FIM//ITEM1
	
};
