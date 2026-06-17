#include "MorInteractableState_Sing.h"
#include "Templates/SubclassOf.h"

UMorInteractableState_Sing::UMorInteractableState_Sing() {
    this->DefaultSingAbility = NULL;
}

TSubclassOf<UGameplayAbility> UMorInteractableState_Sing::GetSingGameplayAbility_Implementation() {
    return NULL;
}



