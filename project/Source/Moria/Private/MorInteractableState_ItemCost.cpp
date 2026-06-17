#include "MorInteractableState_ItemCost.h"

UMorInteractableState_ItemCost::UMorInteractableState_ItemCost() {
    this->ItemSourceQuery = EInventoryQuery::PersonalAttached;
    this->ParentInventory = NULL;
    this->ChallengeInteractable = NULL;
}




bool UMorInteractableState_ItemCost::HasRequiredTools(const ACharacter* Interactor) const {
    return false;
}


