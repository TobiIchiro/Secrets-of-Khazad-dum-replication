#include "MorDialogueEventTypeDefinition.h"

FMorDialogueEventTypeDefinition::FMorDialogueEventTypeDefinition() {
    this->AssociatedConversations = NULL;
    this->EventPriority = EMorDialogueEventPriority::None;
    this->EventCooldownLength = EMorDialogueEventCooldownLength::None;
}

