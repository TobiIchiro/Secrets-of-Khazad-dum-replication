#include "MorWorldLighting.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyLightComponent.h"

AMorWorldLighting::AMorWorldLighting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->DirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("World Directional Light"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("World Skylight"));
    this->HeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("World Fog"));
    this->LowHealth = CreateDefaultSubobject<UPostProcessComponent>(TEXT("LowHP"));
    this->LowHealthWeightCurve = NULL;
    this->HungerDebuff = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Hunger"));
    this->HungerWeightCurve = NULL;
    this->ShadowDebuff = CreateDefaultSubobject<UPostProcessComponent>(TEXT("ShadowDebuff"));
    this->ShadowWeightCurve = NULL;
    this->Cold = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Cold"));
    this->ColdWeightCurve = NULL;
    this->Poison = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Poison"));
    this->PoisonWeightCurve = NULL;
    this->Despair = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Despair"));
    this->DespairFadeSpeed = 1.00f;
    this->Singing = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Singing"));
    this->SingingFadeSpeed = 1.00f;
    this->OrcHunter = CreateDefaultSubobject<UPostProcessComponent>(TEXT("OrcHunter"));
    this->OrcHunterFadeSpeed = 1.00f;
    this->HordeLighting = NULL;
    this->Hearths[0] = NULL;
    this->Hearths[1] = NULL;
    this->Hearths[2] = NULL;
    this->Hearths[3] = NULL;
    this->Hearths[4] = NULL;
    this->HearthBufferDistance = 200.00f;
    this->LocalLightingBufferDistance = 200.00f;
    this->TeleportDistance = 1000.00f;
    this->PostEffectFadeDuration = 5.00f;
    this->DirectionalLightFadeDuration = 5.00f;
    this->FogFadeDuration = 5.00f;
    this->SkylightFadeDuration = 5.00f;
    this->OutdoorFadeDuration = 5.00f;
    this->ApplyLightingTolerance = 0.01f;
    this->ApplyFogTolerance = 0.00f;
    this->AdditionalCheatIntensity = 0.00f;
    this->LastHearthLightingInfo = NULL;
    this->LastLocalLightingInfo = NULL;
    this->LightingManager = NULL;
    this->bIsOutdoorScene = false;
    this->Cold->SetupAttachment(RootComponent);
    this->Despair->SetupAttachment(RootComponent);
    this->DirectionalLight->SetupAttachment(RootComponent);
    this->HeightFog->SetupAttachment(RootComponent);
    this->HungerDebuff->SetupAttachment(RootComponent);
    this->LowHealth->SetupAttachment(RootComponent);
    this->OrcHunter->SetupAttachment(RootComponent);
    this->Poison->SetupAttachment(RootComponent);
    this->ShadowDebuff->SetupAttachment(RootComponent);
    this->Singing->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
}

void AMorWorldLighting::LightReflectorRotating(UMorGameplayLightReflectorComponent* Reflector, bool bIsRotating) {
}

void AMorWorldLighting::LightReflectorModified(UMorGameplayLightReflectorComponent* Reflector) {
}

void AMorWorldLighting::LightReflectorLightUpdated(UMorGameplayLightReflectorComponent* Reflector, bool bIsReceiving) {
}


