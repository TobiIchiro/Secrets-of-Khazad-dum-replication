#include "RopeCuttingController.h"

URopeCuttingController::URopeCuttingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName URopeCuttingController::GetCutComponentName_RC(UPrimitiveComponent* HitCollisionComponent) {
    return NAME_None;
}


