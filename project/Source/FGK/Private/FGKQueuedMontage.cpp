#include "FGKQueuedMontage.h"

FFGKQueuedMontage::FFGKQueuedMontage() {
    this->Asset = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayRate = 0.00f;
    this->LoopCount = 0;
    this->BlendOutTriggerTime = 0.00f;
    this->TimeToStartMontageAt = 0.00f;
}

