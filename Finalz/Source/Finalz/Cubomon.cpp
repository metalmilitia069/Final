// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubomon.h"
#include "Components/BoxComponent.h"/////
#include "FinalzCharacter.h"/////
#include "Kismet/GameplayStatics.h"/////
#include "Components/PrimitiveComponent.h"////
#include "PhysicsEngine/PhysicsAsset.h"
#include "Engine.h"/////////////////////
#include "Components/StaticMeshComponent.h"//////

// Sets default values
ACubomon::ACubomon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	////ITEM9 and more
	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Cu"));/////
	RootComponent = BoxTrigger;///	

	//BoxTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);/////
	//BoxTrigger->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);/////
	//BoxTrigger->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);//////
	//BoxTrigger->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);//////

	CuShape = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cu"));/////
	CuShape->SetupAttachment(GetRootComponent());///
	CuShape->SetSimulatePhysics(false); ////

	CuHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cu"));/////
	CuHead->SetupAttachment(GetRootComponent());///
	CuHead->SetSimulatePhysics(false); ////

	HP = 100.f;

	//FIM //ITEM9 and more

}

// Called when the game starts or when spawned
void ACubomon::BeginPlay()
{
	Super::BeginPlay();

	//ITEM9 and more
	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &ACubomon::OnOverlapBegin); ///
	BoxTrigger->OnComponentEndOverlap.AddDynamic(this, &ACubomon::OnOverlapEnd);///
	//FIM //ITEM9 and more
	
}

// Called every frame
void ACubomon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//ITEM9 and more
void ACubomon::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)/////
{
	//ITEM 9 and more
	
	
		
		HP -= 10.f;

		//UE_LOG(LogTemp, Warning, TEXT(""));////

		//Cast<ACharacter>(OtherActor)->GetCharacterMovement()->AddForce(GetActorForwardVector() * ForwardMultiplier);////
		//Cast<ACharacter>(OtherActor)->GetCharacterMovement()->AddForce(impulse);////
		//Cast<AFinalzProjectile>(OtherActor)
		UE_LOG(LogTemp, Warning, TEXT("Overlap begin"));////

		//Destroy(OtherActor);
	


}////

void ACubomon::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)////
{////
	//UE_LOG(LogTemp, Warning, TEXT("Overlap end"));////

}////

//FIM //ITEM9 and more

