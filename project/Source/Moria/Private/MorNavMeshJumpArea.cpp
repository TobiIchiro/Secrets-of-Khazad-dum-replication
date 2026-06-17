#include "MorNavMeshJumpArea.h"
#include "MorNavMeshJumpAreaComponent.h"

AMorNavMeshJumpArea::AMorNavMeshJumpArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMorNavMeshJumpAreaComponent>(TEXT("JumpArea"));
    this->JumpAreaComponent = (UMorNavMeshJumpAreaComponent*)RootComponent;
}


