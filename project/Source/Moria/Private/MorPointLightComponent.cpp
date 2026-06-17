#include "MorPointLightComponent.h"
#include "Components/PointLightComponent.h"

UMorPointLightComponent::UMorPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
    this->SecondaryLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Secondary Light"));
    this->LightLODGroup = ELightLodGroup::World;
    this->LightCostScale = 1.00f;
    this->LightScalabilityLevel = 3;
    this->OverlappingObjectCount = 0;
    this->OverlappingObjectSurfaceVolume = 0.00f;
    this->UnboundScreenRadius = 1.00f;
    this->CachedActualLightLODGroup = ELightLodGroup::World;
    this->SecondaryLight->SetupAttachment(PointLight);
}


