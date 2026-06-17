#include "MorVolumetricLightShaft.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MorPointLightComponent.h"

AMorVolumetricLightShaft::AMorVolumetricLightShaft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->UseSunDirection = true;
    this->LightIntensity = 10.00f;
    this->LightFunctionMaterial = NULL;
    this->LightshaftRadius = 500.00f;
    this->LightshaftTraceDistance = 10000.00f;
    this->SpotLightLengthAddon = 500.00f;
    this->SpotlightConeAngle = 10.00f;
    this->SpotlightConeBlur = 1.00f;
    this->LightParent = CreateDefaultSubobject<USceneComponent>(TEXT("LightShaft"));
    this->LightMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Light Mesh"));
    this->MorPointLightComponent = CreateDefaultSubobject<UMorPointLightComponent>(TEXT("MorPointLight"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spot Light"));
    this->DistanceSpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("Distance Spot Light"));
    this->DistanceSpotLightComponent->SetupAttachment(SpotLightComponent);
    this->LightMeshComponent->SetupAttachment(LightParent);
    this->LightParent->SetupAttachment(RootComponent);
    this->MorPointLightComponent->SetupAttachment(LightParent);
    this->SpotLightComponent->SetupAttachment(LightParent);
}


