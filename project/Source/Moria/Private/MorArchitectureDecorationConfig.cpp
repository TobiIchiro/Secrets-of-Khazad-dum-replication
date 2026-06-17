#include "MorArchitectureDecorationConfig.h"

UMorArchitectureDecorationConfig::UMorArchitectureDecorationConfig() {
    this->MinBlockDamagePct = 1.00f;
    this->MaxBlockDamagePct = 99.00f;
    this->BlockDamageNoiseScale = 0.00f;
    this->NoiseContrast = 3.00f;
    this->MinRuin = 10.00f;
    this->MaxRuin = 20.00f;
    this->CarveShapeFlatness = 3.00f;
    this->MinCarvesCount = 3;
    this->MaxCarvesCount = 14;
    this->bDrawDebugBoxes = false;
    this->bDrawCarveShapes = false;
}


