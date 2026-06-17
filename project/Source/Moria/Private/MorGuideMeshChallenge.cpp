#include "MorGuideMeshChallenge.h"

AMorGuideMeshChallenge::AMorGuideMeshChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientLoop = NULL;
    this->AmbientFallingDust = NULL;
    this->RockfallTelegraphVFX = NULL;
    this->RockfallObject = NULL;
    this->MinTelegraphTime = 0.50f;
    this->MaxTelegraphTime = 1.00f;
    this->MinAmbientVfxInterval = 1.00f;
    this->MaxAmbientVfxInterval = 5.00f;
    this->TimeBeforeRockfall = 10.00f;
    this->MinRockfallInterval = 3.00f;
    this->MaxRockfallInterval = 3.00f;
    this->RockfallStartDistance = 2500.00f;
    this->RockfallMinimumDistance = 1500.00f;
    this->ChanceToHitOverTime = NULL;
    this->MinimumDropHeight = 1000.00f;
}


