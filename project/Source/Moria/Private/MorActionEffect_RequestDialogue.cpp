#include "MorActionEffect_RequestDialogue.h"

UMorActionEffect_RequestDialogue::UMorActionEffect_RequestDialogue() {
    this->DialogueTable = NULL;
    this->bSendTargetTags = false;
    this->RequestInterval = 5.00f;
    this->DialoguePriority = EMorDialogueEventPriority::Low;
}

void UMorActionEffect_RequestDialogue::RequestDialogueEvent(AActor* Actor) {
}


