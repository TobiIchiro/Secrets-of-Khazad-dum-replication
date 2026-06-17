#include "FGKPlacementVolume.h"

AFGKPlacementVolume::AFGKPlacementVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->SpawnCountMin = 10;
    this->SpawnCountMax = 10;
    this->SpawnMode = ESpawnMode::Random;
    this->HeightMode = EHeightMode::Random;
    this->RotationMode = ERotationMode::FollowActor;
    this->ActorTraceChannel = ECC_WorldStatic;
    this->MinEmbedDistance = -100.00f;
    this->MaxEmbedDistance = -100.00f;
    this->SpawnProbabilityTexture = NULL;
    this->RotationOffsetMin = 0.00f;
    this->RotationOffsetMax = 0.00f;
    this->PositionOffsetTexture = NULL;
    this->PositionOffsetScalar = 1000.00f;
    this->ScaleOffsetTexture = NULL;
    this->ScaleOffsetScalar = 1.00f;
    this->RotationOffsetTexture = NULL;
    this->RotationOffsetScalar = 360.00f;
    this->LandscapeReference = NULL;
}

void AFGKPlacementVolume::Populate() {
}

void AFGKPlacementVolume::Clear() {
}


