#include "FGKSyncedAnimComponent.h"

UFGKSyncedAnimComponent::UFGKSyncedAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPuppetState = EPuppetState::None;
    this->SyncPuppet = NULL;
    this->Character = NULL;
}

void UFGKSyncedAnimComponent::Server_RequestSync_Implementation(const FFGKReplicatedSyncAttackData& InData, AFGKBaseCharacter* InMaster, AFGKBaseCharacter* InPuppet) {
}

void UFGKSyncedAnimComponent::Multicast_SyncSuccess_Implementation(const FFGKReplicatedSyncAttackData& InData, AFGKBaseCharacter* InMaster, AFGKBaseCharacter* InPuppet) {
}

void UFGKSyncedAnimComponent::Multicast_SyncFailed_Implementation(AFGKBaseCharacter* InMaster, AFGKBaseCharacter* Puppet) {
}


