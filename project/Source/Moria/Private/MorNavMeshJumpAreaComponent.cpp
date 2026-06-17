#include "MorNavMeshJumpAreaComponent.h"

UMorNavMeshJumpAreaComponent::UMorNavMeshJumpAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::DontExport;
    this->JumpLinkType = EJumpLinkType::Vertical;
}


