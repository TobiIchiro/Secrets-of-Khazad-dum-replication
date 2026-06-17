#include "FGKAIPingEvent.h"

FFGKAIPingEvent::FFGKAIPingEvent() {
    this->PingReceiver = NULL;
    this->TargetActor = NULL;
    this->PingAwarenessLevel = EFGKAIAwarenessLevel::None;
}

