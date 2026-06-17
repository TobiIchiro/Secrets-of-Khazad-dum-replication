#include "FGKActionCost.h"
#include "GameFramework/Actor.h"

UFGKActionCost::UFGKActionCost() {
    this->OwnerClass = AActor::StaticClass();
    this->bCheckOnly = false;
}


