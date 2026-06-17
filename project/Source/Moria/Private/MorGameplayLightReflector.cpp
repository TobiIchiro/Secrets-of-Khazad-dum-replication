#include "MorGameplayLightReflector.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FGKActorFSMComponent.h"
#include "MorAINavModifierComponent.h"
#include "MorGameplayLightProducerComponent.h"
#include "MorGameplayLightReflectorComponent.h"
#include "TODFillLight.h"

AMorGameplayLightReflector::AMorGameplayLightReflector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsWhiteBox = false;
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("FSMComp"));
    this->ReflectorComponent = CreateDefaultSubobject<UMorGameplayLightReflectorComponent>(TEXT("Light Reflector"));
    this->ReflectorLightSourceLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Light Source Location"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spot Light"));
    this->LightProducer = CreateDefaultSubobject<UMorGameplayLightProducerComponent>(TEXT("Light Producer"));
    this->LightMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Light Mesh"));
    this->TargetFillLight = CreateDefaultSubobject<UTODFillLight>(TEXT("Target Fill Light"));
    this->DirectLightNavAreaComponent = CreateDefaultSubobject<UMorAINavModifierComponent>(TEXT("Direct Light Nav Modifier"));
    this->InteractorAngle = 70.00f;
    this->LightMeshComponent->SetupAttachment(ReflectorLightSourceLocation);
    this->LightProducer->SetupAttachment(RootComponent);
    this->ReflectorComponent->SetupAttachment(RootComponent);
    this->ReflectorLightSourceLocation->SetupAttachment(ReflectorComponent);
    this->SpotLightComponent->SetupAttachment(ReflectorLightSourceLocation);
    this->TargetFillLight->SetupAttachment(RootComponent);
}

UMorGameplayLightReflectorComponent* AMorGameplayLightReflector::GetReflectorComponent() const {
    return NULL;
}


