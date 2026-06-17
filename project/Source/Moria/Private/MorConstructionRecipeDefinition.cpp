#include "MorConstructionRecipeDefinition.h"

FMorConstructionRecipeDefinition::FMorConstructionRecipeDefinition() {
    this->BuildProcess = EBuildProcess::Instant;
    this->LocationRequirement = EConstructionLocation::Anywhere;
    this->PlacementType = EPlacementType::FreePlacement;
    this->bOnWall = false;
    this->bOnFloor = false;
    this->bPlaceOnWater = false;
    this->bOverrideRotation = false;
    this->FoundationRule = EFoundationRule::Never;
    this->bAutoFoundation = false;
    this->bInheritAutoFoundationStability = false;
    this->bAllowRefunds = false;
    this->DialogueDataTable = NULL;
    this->RequiresNearby = NULL;
    this->RequireNearbyRadius = 0.00f;
    this->bOnlyOnVoxel = false;
    this->bIsBlockedByNearbySettlementStones = false;
    this->MonumentType = EMonumentType::None;
    this->bIsBlockedByNearbyRavenConstructions = false;
    this->MaxAllowedPenetrationDepth = 0.00f;
    this->CameraStateOverride = NULL;
    this->CameraStateOverridePriority = 0;
}

