#include "MorBubbleBreakableInstanceHandler.h"
#include "Net/UnrealNetwork.h"

UMorBubbleBreakableInstanceHandler::UMorBubbleBreakableInstanceHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstancedMeshManager = NULL;
    this->BubbleCatalog = NULL;
}

void UMorBubbleBreakableInstanceHandler::HandleOnInstanceStatesReplicated() {
}

void UMorBubbleBreakableInstanceHandler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorBubbleBreakableInstanceHandler, InstanceStates);
}


