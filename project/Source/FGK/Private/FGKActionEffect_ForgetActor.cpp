#include "FGKActionEffect_ForgetActor.h"
#include "AIController.h"

UFGKActionEffect_ForgetActor::UFGKActionEffect_ForgetActor() {
    this->OwnerClass = AAIController::StaticClass();
    this->bForgetAll = false;
}


