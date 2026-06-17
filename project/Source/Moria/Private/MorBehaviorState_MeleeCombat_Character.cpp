#include "MorBehaviorState_MeleeCombat_Character.h"

UMorBehaviorState_MeleeCombat_Character::UMorBehaviorState_MeleeCombat_Character() {
    this->TargetCharacter = NULL;
    this->CombatManager = NULL;
}

void UMorBehaviorState_MeleeCombat_Character::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}

void UMorBehaviorState_MeleeCombat_Character::OnCombatSlotCanceled(FAIRequestID InRequestID, int32 SlotIndex) {
}

void UMorBehaviorState_MeleeCombat_Character::OnCombatSlotAssigned(FAIRequestID InRequestID, int32 SlotIndex, const FVector& SlotLocation) {
}

void UMorBehaviorState_MeleeCombat_Character::OnCombatRequestExpired(FAIRequestID InRequestID) {
}


