#include "MorLocalLightingInfo.h"
#include "Components/BoxComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"

AMorLocalLightingInfo::AMorLocalLightingInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIncludeDirectionalLightParameters = true;
    this->bIncludeSkylightParameters = true;
    this->bIncludeHeightFogParameters = true;
    this->SunlightColorCurve = NULL;
    this->SkylightColorCurve = NULL;
    this->SkyCrystalColorCurve = NULL;
    this->FogColorAndDensityCurve = NULL;
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Bubble PostProcess"));
    this->PostProcessBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PostProcessBox"));
    this->FalloffRadius = 500.00f;
    this->bEnabled = true;
    this->FadeInTime = 2.00f;
    this->bIsOutdoorScene = false;
    this->PostProcess->SetupAttachment(PostProcessBox);
    this->PostProcessBox->SetupAttachment(RootComponent);
}


