#include "MorNPCConversationManager.h"
#include "Net/UnrealNetwork.h"

AMorNPCConversationManager::AMorNPCConversationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AMorNPCConversationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorNPCConversationManager, Data);
    DOREPLIFETIME(AMorNPCConversationManager, Unlocked);
    DOREPLIFETIME(AMorNPCConversationManager, VariantsData);
}


