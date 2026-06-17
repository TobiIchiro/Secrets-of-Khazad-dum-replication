#include "ChallengeManager.h"

AChallengeManager::AChallengeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrailPathRefindTimer = 1.00f;
}

void AChallengeManager::OnNavigationQueryFinished(const FIntVector& CellPosition, EMorAINavigationQueryStatus QueryStatus, FVector FoundLocation) {
}

void AChallengeManager::OnDebugDraw(AHUD* HUD, UCanvas* Canvas) {
}

void AChallengeManager::OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


