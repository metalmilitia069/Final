// Fill out your copyright notice in the Description page of Project Settings.


#include "Pad.h"
#include "Components/BoxComponent.h"/////
#include "FinalzCharacter.h"/////
#include "Kismet/GameplayStatics.h"/////
#include "Components/PrimitiveComponent.h"////
#include "PhysicsEngine/PhysicsAsset.h"
#include "Engine.h"/////////////////////
#include "Components/StaticMeshComponent.h"//////

// Sets default values
APad::APad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	////ITEM4
	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("trapTrigger"));/////
	RootComponent = BoxTrigger;///	

	BoxTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);/////
	BoxTrigger->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);/////
	BoxTrigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);//////
	BoxTrigger->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);//////

	PadShape = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("trapShape"));/////
	PadShape->SetupAttachment(GetRootComponent());///
	PadShape->SetSimulatePhysics(false); ////

	
	
	//FIM //ITEM4

}

// Called when the game starts or when spawned
void APad::BeginPlay()
{
	Super::BeginPlay();

	//ITEM4
	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &APad::OnOverlapBegin); ///
	BoxTrigger->OnComponentEndOverlap.AddDynamic(this, &APad::OnOverlapEnd);///
	//FIM //ITEM4
	
}

// Called every frame
void APad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//ITEM4
void APad::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)/////
{
	//ITEM 4
	if (OtherActor != nullptr)///
	{////
		UE_LOG(LogTemp, Warning, TEXT("Coisou"));////
		
		Cast<ACharacter>(OtherActor)->GetCharacterMovement()->AddForce(GetActorForwardVector() * ForwardMultiplier);////
		Cast<ACharacter>(OtherActor)->GetCharacterMovement()->AddForce(impulse);////
		UE_LOG(LogTemp, Warning, TEXT("Overlap begin"));////
		

	}/////


}////

void APad::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)////
{////
	UE_LOG(LogTemp, Warning, TEXT("Overlap end"));////
	
}////

//FIM //ITEM4

