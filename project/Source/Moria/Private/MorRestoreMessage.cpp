#include "MorRestoreMessage.h"

FMorRestoreMessage::FMorRestoreMessage() {
    this->SourceActor = NULL;
    this->TargetActor = NULL;
    this->bIsOverridenLocation = false;
    this->OriginalRestoreAmount = 0.00f;
    this->ModifiedRestoreAmount = 0.00f;
    this->HealthRestoreAmount = 0.00f;
}

