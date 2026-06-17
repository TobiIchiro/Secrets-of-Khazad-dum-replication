#include "MorEasySky.h"

AMorEasySky::AMorEasySky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Time = 0.00f;
    this->SunlightComponent = NULL;
    this->MoonlightComponent = NULL;
    this->HeightFog = NULL;
    this->SkyLightComponent = NULL;
    this->VolumetricCloudComponent = NULL;
    this->SkyAtmosphereComponent = NULL;
}


void AMorEasySky::SetupLightingComponents(UDirectionalLightComponent* InSunlight, UDirectionalLightComponent* InMoonlight, UExponentialHeightFogComponent* InHeightFog, USkyLightComponent* InSkylight, UVolumetricCloudComponent* InVolumetricClouds, USkyAtmosphereComponent* InSkyAtmosphere) {
}

void AMorEasySky::SetStartingTime() {
}



bool AMorEasySky::IsInEditorModePure() const {
    return false;
}

bool AMorEasySky::IsInEditorMode() {
    return false;
}











