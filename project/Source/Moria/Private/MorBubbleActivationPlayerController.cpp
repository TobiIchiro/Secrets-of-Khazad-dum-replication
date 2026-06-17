#include "MorBubbleActivationPlayerController.h"
#include "Net/UnrealNetwork.h"

UMorBubbleActivationPlayerController::UMorBubbleActivationPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerController = NULL;
    this->BubbleActivationManager = NULL;
}

void UMorBubbleActivationPlayerController::ServerSetReadyToActivateBubble_Implementation(const FIntVector& BubbleCoords, uint8 ActivationCounterRaw) {
}

void UMorBubbleActivationPlayerController::ServerSetBubbleUnloading_Implementation(const FIntVector& BubbleCoords) {
}

void UMorBubbleActivationPlayerController::HandleOnWorldLayoutReady() {
}

void UMorBubbleActivationPlayerController::ClientConfirmReadyToActivateBubble_Implementation(const FIntVector& BubbleCoords) {
}

void UMorBubbleActivationPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorBubbleActivationPlayerController, ActivatedBubbles);
}


