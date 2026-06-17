#include "FGKBehaviorState_MeleeAttack.h"

UFGKBehaviorState_MeleeAttack::UFGKBehaviorState_MeleeAttack() {
    this->bFinishOnActiveChild = false;
    this->AttackWeight = 4;
    this->Priority = 0;
    this->bCanMove = true;
    this->MaxActiveTime = 5.00f;
    this->ActivationFailureCooldown = 5.00f;
    this->DefaultCooldownTime = -1.00f;
    this->bSlotGranted = false;
    this->Target = NULL;
    this->GoToPositionState = NULL;
    this->ActionState = NULL;
    this->LeavePositionState = NULL;
    this->CombatManager = NULL;
}

void UFGKBehaviorState_MeleeAttack::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}

void UFGKBehaviorState_MeleeAttack::OnCombatSlotExpired() {
}

void UFGKBehaviorState_MeleeAttack::OnCombatSlotCanceled(FAIRequestID RequestID, int32 SlotIndex) {
}

void UFGKBehaviorState_MeleeAttack::OnCombatSlotAssigned(FAIRequestID RequestID, int32 SlotIndex, const FVector& SlotLocation) {
}

void UFGKBehaviorState_MeleeAttack::OnCombatRequestExpired(FAIRequestID RequestID) {
}


