#include "FGKMenuState.h"
#include "Templates/SubclassOf.h"

UFGKMenuState::UFGKMenuState() {
    this->bFinishOnActiveChild = false;
    this->MenuActionMappings.AddDefaulted(8);
}

void UFGKMenuState::SetNextMenuRequest(const FName InNextMenu) {
}



UFGKMenuState* UFGKMenuState::FindFirstMenuParentInternal(const TSubclassOf<UFGKMenuState> StateType) const {
    return NULL;
}


