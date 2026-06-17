#include "MorWaterColliderTriggerBoxComp.h"
#include "NavAreas/NavArea_Obstacle.h"

UMorWaterColliderTriggerBoxComp::UMorWaterColliderTriggerBoxComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->WaterTriggerBoxCategory = EWaterTriggerBoxCategory::Shallow;
    this->bEnableDebugDraw = false;
    this->DebugBoxType = EDebugBoxType::Outline;
}


