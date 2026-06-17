#include "MoriaAnimNotify_VoiceLine.h"
#include "EFGKAnimNotify.h"

UMoriaAnimNotify_VoiceLine::UMoriaAnimNotify_VoiceLine() {
    this->NotifyType = EFGKAnimNotify::VoiceLine;
    this->bUseEventTable = false;
    this->DialogueTable = NULL;
    this->DialoguePriority = EMorDialogueEventPriority::Low;
}


