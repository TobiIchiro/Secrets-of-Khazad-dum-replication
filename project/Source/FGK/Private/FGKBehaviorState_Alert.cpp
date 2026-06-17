#include "FGKBehaviorState_Alert.h"

UFGKBehaviorState_Alert::UFGKBehaviorState_Alert() {
    this->TeamAttitude = ETeamAttitude::Hostile;
    this->bSetTargetLKPOnBegin = true;
    this->bSetTargetLKPOnUpdate = false;
    this->bSetTargetBB = true;
    this->bSetApproachSlotLocationBBKey = true;
    this->bShouldTargetLock = true;
    this->TargetLKPKeyName = TEXT("TargetLKP");
    this->TargetKeyName = TEXT("Target");
    this->Target = NULL;
    this->PreviousGait = EFGKGait::Walking;
    this->bShouldRequestApproach = true;
    this->CombatManager = NULL;
}

void UFGKBehaviorState_Alert::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}

void UFGKBehaviorState_Alert::OnCombatSlotCanceled(FAIRequestID InRequestID, int32 SlotIndex) {
}

void UFGKBehaviorState_Alert::OnCombatSlotAssigned(FAIRequestID InRequestID, int32 SlotIndex, const FVector& SlotLocation) {
}

void UFGKBehaviorState_Alert::OnCombatRequestExpired(FAIRequestID InRequestID) {
}


