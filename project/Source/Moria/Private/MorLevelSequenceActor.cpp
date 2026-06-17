#include "MorLevelSequenceActor.h"

AMorLevelSequenceActor::AMorLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicatePlayback = true;
    this->bOverrideTransformOriginToBubble = false;
    this->bAutoDisableCinematicMode = true;
    this->bActivateGamePauseScope = true;
    this->bDisableBackgroundMusic = true;
    this->bDisableEncounters = false;
}



void AMorLevelSequenceActor::SetTransformOriginToCurrentBubble() {
}

void AMorLevelSequenceActor::SetTransformOriginToActor(AActor* OriginActor) {
}

void AMorLevelSequenceActor::ResetBindingsByTags(const TArray<FName>& BindingTags) {
}

void AMorLevelSequenceActor::ResetBindingByTag(const FName& BindingTag) {
}


void AMorLevelSequenceActor::HandleOnSequencePlayerStateChanged() {
}

void AMorLevelSequenceActor::EnablePlayerCinematicModeFromPawn(APawn* PlayerPawn, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

void AMorLevelSequenceActor::EnablePlayerCinematicMode(APlayerController* PlayerController, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

void AMorLevelSequenceActor::DisableCinematicMode() {
}


