#include "FGKAkComponent.h"

UFGKAkComponent::UFGKAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequentialSubtitleComponent = NULL;
}

void UFGKAkComponent::PostSequentialAkSubtitlesAndWaitForEndAsync(const TArray<FSimpleAkSubtitle>& AkSubtitles, UFGKUISubtitleComponent* SubtitleComponent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, bool bShowSubtitle) {
}

void UFGKAkComponent::PostSequentialAkEventsAndWaitForEndAsync(const TArray<UAkAudioEvent*>& AkEvents, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

void UFGKAkComponent::PostNextAkSubtitleInSequence() {
}

void UFGKAkComponent::PostNextAkEventInSequence() {
}


