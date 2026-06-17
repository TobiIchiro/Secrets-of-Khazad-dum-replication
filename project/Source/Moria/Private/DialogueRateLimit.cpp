#include "DialogueRateLimit.h"

FDialogueRateLimit::FDialogueRateLimit() {
    this->RateLimitType = EMorRateLimitType::None;
    this->NumberOfTimesToPlayDialogue = 0;
    this->CooldownLength = EMorDialogueEventCooldownLength::None;
}

