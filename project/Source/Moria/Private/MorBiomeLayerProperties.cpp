#include "MorBiomeLayerProperties.h"

UMorBiomeLayerProperties::UMorBiomeLayerProperties() {
    this->BiomeSpecularIntensity = 1.00f;
    this->BiomeSpecularContrast = 1.00f;
    this->BiomeTextureScale = 5.00f;
    this->BiomeNormalBlendAmount = 0.00f;
    this->BiomeNormalIntensity = 1.00f;
    this->BiomeRoughness = 0.50f;
    this->BiomeUpwardContrast = 0.50f;
    this->BiomeUpwardInfluence = 0.50f;
    this->BiomeEdgeInfluence = 0.50f;
    this->BiomeOcclusionInfluence = 0.50f;
    this->BiomeNoiseContrast = 0.50f;
    this->BiomeNoiseInfluence = 0.80f;
    this->BiomeHeightPhaseUnbounded = 0.10f;
    this->BiomeHeightPhaseBounded = 0.10f;
    this->BiomeBaseColorBlendAmount = 0.10f;
}


