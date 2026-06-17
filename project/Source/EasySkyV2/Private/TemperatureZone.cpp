#include "TemperatureZone.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

ATemperatureZone::ATemperatureZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene Component"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->VolumeType = ESVolumeType::SPHERE;
    this->TemperatureType = EESTemperatureType::DifferenceTemp;
    this->Temperature = 5.00f;
    this->Priority = 0;
    this->Power = 1.00f;
    this->Hardness = 1.00f;
    this->EasySkyActor = NULL;
    this->BoxComponent->SetupAttachment(SceneComponent);
    this->SphereComponent->SetupAttachment(SceneComponent);
}

void ATemperatureZone::callAddRemoveTemperatureZone(bool Add, ATemperatureZone* TemperatureZone) {
}


