#include "MorInteractableState_VenerationIdle.h"
#include "Templates/SubclassOf.h"

UMorInteractableState_VenerationIdle::UMorInteractableState_VenerationIdle() {
    this->CharInteractor = NULL;
}

TSubclassOf<UGameplayAbility> UMorInteractableState_VenerationIdle::GetGameplayAbility_Implementation() {
    return NULL;
}


