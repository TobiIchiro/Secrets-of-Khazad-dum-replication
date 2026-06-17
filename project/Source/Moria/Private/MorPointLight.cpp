#include "MorPointLight.h"
#include "Components/SceneComponent.h"
#include "MorPointLightComponent.h"

AMorPointLight::AMorPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MorPointLightComponent = CreateDefaultSubobject<UMorPointLightComponent>(TEXT("Mor Point Light"));
    this->MorPointLightComponent->SetupAttachment(RootComponent);
}

UMorPointLightComponent* AMorPointLight::GetMorPointLightComponent() const {
    return NULL;
}


