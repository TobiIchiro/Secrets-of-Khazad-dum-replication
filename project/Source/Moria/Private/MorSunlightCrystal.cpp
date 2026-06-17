#include "MorSunlightCrystal.h"
#include "Components/StaticMeshComponent.h"

AMorSunlightCrystal::AMorSunlightCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->OwningZoneLighting = NULL;
    this->SharedMaterial = NULL;
}


