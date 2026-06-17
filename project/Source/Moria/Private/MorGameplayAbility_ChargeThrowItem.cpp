#include "MorGameplayAbility_ChargeThrowItem.h"

UMorGameplayAbility_ChargeThrowItem::UMorGameplayAbility_ChargeThrowItem() {
    this->bEarlyExitFastRetrigger = true;
    this->MinThrowForce = 100.00f;
    this->MaxThrowForce = 100.00f;
    this->DropItem = NULL;
}

void UMorGameplayAbility_ChargeThrowItem::OnScreenHidden(UFGKUIScreen* Screen) {
}

void UMorGameplayAbility_ChargeThrowItem::CancelFromTagAdded() {
}


