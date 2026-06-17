#include "MorSaveSystemWorldState.h"
#include "MorBuildingComponent.h"

AMorSaveSystemWorldState::AMorSaveSystemWorldState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoSaveEnabled = true;
    this->bSaveLevelBlueprints = false;
    this->bNoPlayerCharacterTransforms = false;
    this->Building = CreateDefaultSubobject<UMorBuildingComponent>(TEXT("BuildingComponent"));
    this->RegisteredLevelRecords = NULL;
}

bool AMorSaveSystemWorldState::UnregisterRuntimeActorFromHandle(const FMorSaveDataRuntimeActorRecordHandle& ActorHandle, bool bWasDestroyed, bool bUnregisterFromLevelRecord) {
    return false;
}

bool AMorSaveSystemWorldState::StoreRuntimeActorFromHandle(FMorSaveDataRuntimeActorRecordHandle& RuntimeActorHandle, bool bStoreStability) {
    return false;
}

bool AMorSaveSystemWorldState::StoreRuntimeActor(AActor* Actor, FMorSaveDataRuntimeActorRecordHandle& InOutRuntimeActorHandle, bool bStoreStability) {
    return false;
}

void AMorSaveSystemWorldState::OnWorldIsReady() {
}

void AMorSaveSystemWorldState::OnWorldBeginPlay() {
}

void AMorSaveSystemWorldState::OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState State) {
}

AActor* AMorSaveSystemWorldState::GetRuntimeActorFromHandle(const FMorSaveDataRuntimeActorRecordHandle& ActorHandle, bool& bActorIsValid) {
    return NULL;
}


