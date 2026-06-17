#include "FGKPlayerDebugComponent.h"

UFGKPlayerDebugComponent::UFGKPlayerDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugSpawning = NULL;
    this->ControllerOwner = NULL;
}

void UFGKPlayerDebugComponent::Server_QuickSpawn_Implementation(const TArray<FString>& Args) {
}

void UFGKPlayerDebugComponent::Client_QuickSpawnComplete_Implementation(const FString& Msg) {
}


