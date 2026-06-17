#include "MorInputState_Base.h"

UMorInputState_Base::UMorInputState_Base() {
    this->PossessedCharacter = NULL;
    this->AbilityComp = NULL;
    this->InventoryComp = NULL;
    this->EquipComp = NULL;
}

void UMorInputState_Base::OnPawnChanged() {
}

void UMorInputState_Base::OnInputDeviceChanged() {
}


