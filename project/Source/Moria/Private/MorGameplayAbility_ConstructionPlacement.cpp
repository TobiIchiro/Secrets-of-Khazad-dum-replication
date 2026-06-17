#include "MorGameplayAbility_ConstructionPlacement.h"

UMorGameplayAbility_ConstructionPlacement::UMorGameplayAbility_ConstructionPlacement() {
    this->BuildMode = EBuildMode::Construct;
    this->bExitAfterBuild = false;
    this->DefaultPlacementMode = EConstructionPlacementMode::Standard;
    this->BuildingComponent = NULL;
    this->CameraStateOverride = NULL;
    this->CameraManager = NULL;
    this->SpawnedActorPlacement = NULL;
}

void UMorGameplayAbility_ConstructionPlacement::TryBuild() {
}

void UMorGameplayAbility_ConstructionPlacement::SetCameraMode_Implementation(EBuildCameraMode NewModeIn) {
}

void UMorGameplayAbility_ConstructionPlacement::SelectRecipe(const FMorConstructionRecipeRowHandle& Recipe) {
}

EConstructionPlacementMode UMorGameplayAbility_ConstructionPlacement::GetPlacementMode() {
    return EConstructionPlacementMode::Standard;
}


