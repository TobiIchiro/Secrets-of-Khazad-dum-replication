#include "FGKAnimNotifyCameraShake.h"
#include "EFGKAnimNotify.h"

UFGKAnimNotifyCameraShake::UFGKAnimNotifyCameraShake() {
    this->NotifyType = EFGKAnimNotify::CameraShake;
    this->ShakeClass = NULL;
    this->Scale = 1.00f;
}


