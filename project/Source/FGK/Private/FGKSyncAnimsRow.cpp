#include "FGKSyncAnimsRow.h"

FFGKSyncAnimsRow::FFGKSyncAnimsRow() {
    this->SyncAnimsMaster = NULL;
    this->SyncAnimsPuppet = NULL;
    this->MovementRatio = 0.00f;
    this->LerpTimePercentage = 0.00f;
    this->MaxLerpSpeed = 0.00f;
    this->RotationTimePercentage = 0.00f;
    this->MaxRotationSpeed = 0.00f;
    this->DeltaAngle = 0.00f;
    this->MaximumDistance = 0.00f;
    this->MinimumDistance = 0.00f;
    this->HeightDelta = 0.00f;
    this->Weight = 0;
    this->HitDirection = ESyncAnimDirection::Front;
    this->bPuppetIntroPlaying = false;
}

