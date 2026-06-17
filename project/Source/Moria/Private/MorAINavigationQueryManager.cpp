#include "MorAINavigationQueryManager.h"

AMorAINavigationQueryManager::AMorAINavigationQueryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TimeBetweenQueryAttempts = 3.00f;
}

void AMorAINavigationQueryManager::OnWorldBeginTearingDown(UWorld* World) {
}

void AMorAINavigationQueryManager::OnBubbleUpdate(const UWorldLayoutBubble* Bubble, EBubbleUpdateState NewState) {
}


