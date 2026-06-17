#include "MorBakedLocalLighting.h"

FMorBakedLocalLighting::FMorBakedLocalLighting() {
    this->DirectionalLightVolumetricScatteringIntensity = 0.00f;
    this->DirectionalLightBloomScale = 0.00f;
    this->DirectionalLightBloomThreshold = 0.00f;
    this->DirectionalLightShadowAmount = 0.00f;
    this->DirectionalLightSpecularScale = 0.00f;
    this->DirectionalLightTemperature = 0.00f;
    this->HeightFogFogDensity = 0.00f;
    this->HeightFogFogHeightFalloff = 0.00f;
    this->HeightFogFogMaxOpacity = 0.00f;
    this->HeightFogStartDistance = 0.00f;
    this->HeightFogFogCutoffDistance = 0.00f;
    this->HeightFogDirectionalInscatteringExponent = 0.00f;
    this->HeightFogDirectionalInscatteringStartDistance = 0.00f;
    this->HeightFogVolumetricFogScatteringDistribution = 0.00f;
    this->HeightFogVolumetricFogExtinctionScale = 0.00f;
    this->HeightFogVolumetricFogDistance = 0.00f;
    this->SkylightVolumetricScatteringIntensity = 0.00f;
    this->SkylightOcclusionExponent = 0.00f;
    this->SkylightMinOcclusion = 0.00f;
    this->SkylightIntensity = 0.00f;
}

