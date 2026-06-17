#include "MorBubbleRealizationDebuggerPlayerComponent.h"

UMorBubbleRealizationDebuggerPlayerComponent::UMorBubbleRealizationDebuggerPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Debugger = NULL;
}

void UMorBubbleRealizationDebuggerPlayerComponent::ServerSetUserName_Implementation(const FString& InUserName) {
}

void UMorBubbleRealizationDebuggerPlayerComponent::ServerReportBubbleHash_Implementation(const FIntVector& BubbleCoords, const FString& BubbleHash, bool bHasErrors) {
}

void UMorBubbleRealizationDebuggerPlayerComponent::HandleOnWorldLayoutReady() {
}

void UMorBubbleRealizationDebuggerPlayerComponent::ClientReportDifferentBubbleHash_Implementation(const FIntVector& BubbleCoords) {
}


