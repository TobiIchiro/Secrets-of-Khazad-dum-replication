#include "WormBehaviorFindAttackLocation.h"

UWormBehaviorFindAttackLocation::UWormBehaviorFindAttackLocation() {
    this->CombatManager = NULL;
    this->Target = NULL;
    this->AttackLocationExtrapolationTime = 1.00f;
}

void UWormBehaviorFindAttackLocation::OnCombatSlotCanceled(const FAIRequestID RequestID, const int32 SlotIndex) {
}

void UWormBehaviorFindAttackLocation::OnCombatSlotAssigned(const FAIRequestID RequestID, const int32 SlotIndex, const FVector& SlotLocation) {
}

void UWormBehaviorFindAttackLocation::OnCombatRequestExpired(const FAIRequestID RequestID) {
}


