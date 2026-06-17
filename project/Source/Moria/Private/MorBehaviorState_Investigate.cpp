#include "MorBehaviorState_Investigate.h"

UMorBehaviorState_Investigate::UMorBehaviorState_Investigate() {
    this->DialogueTableForNewStimulus = NULL;
    this->DialoguePriority = EMorDialogueEventPriority::Low;
    this->NewStimulusDialogueMinDistance = 400.00f;
    this->NewStimulusDialogueDelaySeconds = 5.00f;
}

void UMorBehaviorState_Investigate::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}


