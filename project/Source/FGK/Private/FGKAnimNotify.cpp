#include "FGKAnimNotify.h"

UFGKAnimNotify::UFGKAnimNotify() {
    this->NotifyType = EFGKAnimNotify::Default;
}

UObject* UFGKAnimNotify::GetSourceObject() const {
    return NULL;
}


