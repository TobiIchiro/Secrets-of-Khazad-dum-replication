#include "MorGameplayAbility_Mining.h"

UMorGameplayAbility_Mining::UMorGameplayAbility_Mining() {
    this->bGrooves = true;
    this->bExecuteOnHitIdeal = true;
    this->HitSettings.AddDefaulted(1);
    this->DroppedItem = NULL;
    this->RubbleItemType = NULL;
    this->RubbleHitsPerSpawn = 4;
    this->TooCloseToFloorForMiningAngle = 50.00f;
    this->Range = 250.00f;
    this->TargetBreakableReticleScale = 1.00f;
    this->NonVoxelStoneReticleSize = 1.00f;
    this->MinCarveDepth = 5.00f;
    this->MaxCarveDepth = 100.00f;
    this->DefaultHitVfx = NULL;
    this->CrackDecal = NULL;
    this->DefaultHitSound = NULL;
    this->HitEffect = NULL;
    this->bStartSongWithAbility = false;
    this->bEndSongWithAbility = false;
    this->StartOffset = 0.00f;
    this->AISoundRange = 3000.00f;
    this->MiningSong = NULL;
}


