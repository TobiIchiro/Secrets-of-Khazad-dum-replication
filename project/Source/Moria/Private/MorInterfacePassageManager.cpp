#include "MorInterfacePassageManager.h"

AMorInterfacePassageManager::AMorInterfacePassageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransitionOpenTime = 1.00f;
    this->FramesToSwitchBarriers = 2;
    this->bDebugTransitionOpenWithScale = false;
    this->InterfaceBlockTextClass = NULL;
    this->InstancedMeshManager = NULL;
    this->WorldLayout = NULL;
}

void AMorInterfacePassageManager::HandleOnWorldBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


