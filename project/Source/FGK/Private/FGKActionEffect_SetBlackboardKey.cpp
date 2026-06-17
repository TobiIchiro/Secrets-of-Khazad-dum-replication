#include "FGKActionEffect_SetBlackboardKey.h"
#include "AIController.h"

UFGKActionEffect_SetBlackboardKey::UFGKActionEffect_SetBlackboardKey() {
    this->OwnerClass = AAIController::StaticClass();
    this->bNewVal = true;
}


