#include "MorPrefabStabilityComponent.h"

UMorPrefabStabilityComponent::UMorPrefabStabilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->StabilityType = EMorArchitectureBlockStability::Normal;
    this->bDestroyIfCloseToEdge = false;
}


