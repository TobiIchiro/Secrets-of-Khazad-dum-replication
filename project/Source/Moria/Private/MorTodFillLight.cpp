#include "MorTodFillLight.h"
#include "Components/SceneComponent.h"
#include "TODFillLight.h"

AMorTodFillLight::AMorTodFillLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->LightComponent = CreateDefaultSubobject<UTODFillLight>(TEXT("Fill Light"));
    this->LightComponent->SetupAttachment(RootComponent);
}


