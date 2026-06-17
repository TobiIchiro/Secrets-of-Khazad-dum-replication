#include "MoriaMineralPropertyAsset.h"

UMoriaMineralPropertyAsset::UMoriaMineralPropertyAsset() {
    this->VeinThreshold = 64;
    this->DepositType = 0;
    this->bIsVeinMineral = false;
    this->ContainingRockMineral = NULL;
    this->CarveToolName = TEXT("Default");
    this->Hits = 2;
    this->Hardness = 10;
    this->bSupportsVeins = false;
    this->bSongInspiring = false;
    this->ReticleSize = 1.00f;
    this->OreDecalMaterial = NULL;
    this->SecondaryOreDecalMaterial = NULL;
    this->OreReceptacleDecalMaterial = NULL;
    this->HitSound = NULL;
}


