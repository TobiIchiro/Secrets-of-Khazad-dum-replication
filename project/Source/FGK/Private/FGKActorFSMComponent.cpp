#include "FGKActorFSMComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UFGKActorFSMComponent::UFGKActorFSMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreateOnBegin = true;
    this->bUpdateInTick = true;
    this->bReplicatesInitialState = false;
    this->bAllowMultipleNetworkedTransitionsPerTick = false;
    this->FSMClass = NULL;
    this->FSMAsset = NULL;
    this->bDebugLogTransitions = false;
    this->FSMRoot = NULL;
    this->NextFreeStateReplicationId = 1;
    this->AllStatesArrayReplicationKey = 0;
    this->bEnableDynamicRunTimeStateReplication = false;
}

void UFGKActorFSMComponent::Server_TransmitStateTransitionWithTarget_Implementation(FFGKStateIdentifier StateIdentifier, float Time, AActor* Target, FGameplayAbilityTargetDataHandle Data) {
}

void UFGKActorFSMComponent::Server_TransmitStateTransition_Implementation(FFGKStateIdentifier StateIdentifier, float Time) {
}

void UFGKActorFSMComponent::Server_RemoveState_Implementation(UFGKState* State) {
}

void UFGKActorFSMComponent::Server_FinishState_Implementation(FFGKStateIdentifier StateIdentifier) {
}

void UFGKActorFSMComponent::Server_CreateFSM_Implementation() {
}

void UFGKActorFSMComponent::Server_AddState_Implementation(UFGKState* ParentState, TSubclassOf<UFGKState> ChildStateClass, FFGKHashedString ChildStateID) {
}

void UFGKActorFSMComponent::OnRep_RunTimeStates() {
}

void UFGKActorFSMComponent::Multicast_FinishState_Implementation(FFGKStateIdentifier StateIdentifier) {
}

void UFGKActorFSMComponent::LogTransitionIfApt(UFGKState* Sender, UFGKState* LastNode, UFGKState* NextNode) {
}

bool UFGKActorFSMComponent::IsProcessingInitialTransitions() const {
    return false;
}

bool UFGKActorFSMComponent::HasFSM() const {
    return false;
}

TArray<FFGKFastStateTransitionRecord> UFGKActorFSMComponent::GetNextPendingTransitions(UFGKState* State) {
    return TArray<FFGKFastStateTransitionRecord>();
}

UFGKState* UFGKActorFSMComponent::GetFSMRoot() const {
    return NULL;
}

void UFGKActorFSMComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKActorFSMComponent, FastTransitionsArray);
    DOREPLIFETIME(UFGKActorFSMComponent, RunTimeStates);
}


