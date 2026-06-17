#include "BroadphaseOperation.h"

FBroadphaseOperation::FBroadphaseOperation() {
    this->Type = EBroadphaseOperationType::Unknown;
    this->Bubble = NULL;
    this->MaximumBubbleLimit = 0;
}

