#include "MorLightProxy.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MorAINavModifierComponent.h"
#include "MorGameplayLightProducerComponent.h"
#include "TODFillLight.h"

AMorLightProxy::AMorLightProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bOptional = false;
    this->Probability = 1.00f;
    this->LightIntensity = 10.00f;
    this->BounceSurfaceDistance = 300.00f;
    this->LightFunctionMaterial = NULL;
    this->LightshaftMesh = NULL;
    this->LightshaftMaterial = NULL;
    this->DistantLightMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Distant Light Mesh"));
    this->DistantLightshaftMaterial = NULL;
    this->LightshaftVolumetricMaxDrawDistance = 5000.00f;
    this->LightshaftVolumetricMaxDrawFadeRange = 1000.00f;
    this->LightshaftRadius = 600.00f;
    this->LightshaftTraceDistance = 10000.00f;
    this->SpotLightLengthAddon = 1000.00f;
    this->SpotlightConeAngle = 10.00f;
    this->SpotlightConeBlur = 1.00f;
    this->LightshaftParent = CreateDefaultSubobject<USceneComponent>(TEXT("Lightshaft Parent"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spot Light"));
    this->DistanceSpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("Distance Spot Light"));
    this->LightProducer = CreateDefaultSubobject<UMorGameplayLightProducerComponent>(TEXT("Light Producer"));
    this->DirectLightProducer = CreateDefaultSubobject<UMorGameplayLightProducerComponent>(TEXT("Direct Light Producer"));
    this->DirectLightNavAreaComponent = CreateDefaultSubobject<UMorAINavModifierComponent>(TEXT("Direct Light Nav Modifier"));
    this->LightMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Light Mesh"));
    this->EntranceFillLight = CreateDefaultSubobject<UTODFillLight>(TEXT("Entrance Fill Light"));
    this->TargetFillLight = CreateDefaultSubobject<UTODFillLight>(TEXT("Target Fill Light"));
    this->TODCurve = NULL;
    this->LightScalabilityLevel = 0;
    this->ShadowMaxDrawDistance = 6000.00f;
    this->ShadowFadeLength = 1000.00f;
    this->LightMaxDrawDistance = 15000.00f;
    this->LightFadeLength = 1000.00f;
    this->DistanceSpotLightComponent->SetupAttachment(SpotLightComponent);
    this->DistantLightMeshComponent->SetupAttachment(LightshaftParent);
    this->EntranceFillLight->SetupAttachment(RootComponent);
    this->LightMeshComponent->SetupAttachment(LightshaftParent);
    this->LightshaftParent->SetupAttachment(RootComponent);
    this->SpotLightComponent->SetupAttachment(LightshaftParent);
    this->TargetFillLight->SetupAttachment(RootComponent);
}


