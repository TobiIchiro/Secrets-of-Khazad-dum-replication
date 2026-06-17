#include "MorDialogueDefinition.h"

FMorDialogueDefinition::FMorDialogueDefinition() {
    this->bIsFirstLine = false;
    this->bIsFirstTimeVariant = false;
    this->SpeakerIndex = 0;
    this->SpeakerChoice = ESpeakerChoice::SpecificSpeaker;
    this->LineSpecificCooldown = EMorDialogueEventCooldownLength::None;
    this->MinNumberOfSpeakers = 0;
    this->DelayToPlayLine = 0.00f;
    this->bOverrideMaxReplyDistance = false;
    this->OverrideMaxReplyDistance = 0.00f;
}

