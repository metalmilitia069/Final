// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"
#include "Components/BoxComponent.h"/////
#include "FinalzCharacter.h"////
#include "Components/StaticMeshComponent.h"//////

// Sets default values
ATrap::ATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ITEM2
	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("trapTrigger"));/////
	RootComponent = BoxTrigger;///	

	BoxTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);/////
	BoxTrigger->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);/////
	BoxTrigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);//////
	BoxTrigger->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);//////

	TrapShape = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("trapShape"));/////
	TrapShape->SetupAttachment(GetRootComponent());///
	TrapShape->SetSimulatePhysics(true); ////

	damage = 10.f;

	//FIM ITEM2

}

// Called when the game starts or when spawned
void ATrap::BeginPlay()
{
	Super::BeginPlay();

	//ITEM2
	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &ATrap::OnOverlapBegin); ///
	BoxTrigger->OnComponentEndOverlap.AddDynamic(this, &ATrap::OnOverlapEnd);///
	//FIM //ITEM2
	
}

// Called every frame
void ATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

//ITEM2
void ATrap::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)/////
{
	//ITEM2
	if (OtherActor != nullptr)///
	{////
		UE_LOG(LogTemp, Warning, TEXT("Coisou"));////
		Cast<AFinalzCharacter>(OtherActor)->ApplyDamage(damage);////
		UE_LOG(LogTemp, Warning, TEXT("Overlap begin"));////
		/*Destroy(this);*/

	}/////


}////

void ATrap::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)////
{////
	UE_LOG(LogTemp, Warning, TEXT("Overlap end"));////
	this->Destroy(true);
}////

//FIM //ITEM2

