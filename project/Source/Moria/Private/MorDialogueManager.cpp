#include "MorDialogueManager.h"

AMorDialogueManager::AMorDialogueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFirstTimeVar = false;
    this->bFirstTimeVarPlayed = true;
    this->DefaultMaximumReplyDistance = 1000.00f;
    this->MinTimeBetweenAmbientBanter = 15.00f;
    this->MaxDistanceToPlayerToTriggerBanter = 5000.00f;
    this->MaxDistanceToTriggerSubtitleAndLipsync = 10000.00f;
    this->bUseMostSpecificVoiceLine = true;
    this->TimeToSaveLineTimestamps = 120.00f;
    this->NeverSaidScore = 10.00f;
}

bool AMorDialogueManager::RequestDialogueEventWithTagAndConversationTrack(FGameplayTag EventTag, AMorCharacter* Speaker, int32& ConversationID, FGameplayTagContainer TargetTags) {
    return false;
}

bool AMorDialogueManager::RequestDialogueEventWithTag(FGameplayTag EventTag, AMorCharacter* Speaker, FGameplayTagContainer TargetTags, bool bLocalOnly) {
    return false;
}

bool AMorDialogueManager::RequestDialogueEventFromTableAndConversationTrack(UDataTable* EventTable, AMorCharacter* Speaker, EMorDialogueEventPriority Priority, FDialogueRateLimit RateLimit, int32& ConversationID, FGameplayTagContainer TargetTags, bool bLocalOnly) {
    return false;
}

bool AMorDialogueManager::RequestDialogueEventFromTable(UDataTable* EventTable, AMorCharacter* Speaker, EMorDialogueEventPriority Priority, FDialogueRateLimit RateLimit, FGameplayTagContainer TargetTags, bool bLocalOnly) {
    return false;
}

void AMorDialogueManager::OnVoiceLineEnded(UVoiceComponent* SpeakerVoiceComponent) {
}

void AMorDialogueManager::OnCurrentSpeakerDestroyed(AActor* DestroyedActor) {
}


