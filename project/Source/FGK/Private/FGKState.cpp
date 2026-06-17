#include "FGKState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UFGKState::UFGKState() {
    this->Parent = NULL;
    this->CooldownTime = -1.00f;
    this->bAllChildrenActive = false;
    this->bIsSelfFinished = false;
    this->bOnlyFinishOnLastChild = false;
    this->bFinishOnActiveChild = true;
    this->bIsHub = false;
    this->bCanActivateIfAnyChildCan = false;
    this->bRememberActiveChild = false;
    this->bFinishNextFrame = false;
    this->bReplicateTarget = false;
    this->bAutoActivateDefaultChild = true;
    this->bConsiderTransitionsLocally = false;
    this->bIsActive = false;
    this->bAborted = false;
    this->RequiredChildType = UFGKState::StaticClass();
    this->ActorOwner = NULL;
    this->ComponentOwner = NULL;
    this->FlatHierarchyIndex = 0;
    this->ActiveChildIndex = 0;
    this->TimeActive = 0.00f;
    this->ActiveChild = NULL;
    this->TargetActor = NULL;
    this->TagHolder = NULL;
    this->ReplicationID = -1;
    this->ReplicationKey = 0;
}

void UFGKState::Update(float DeltaTime) {
}

bool UFGKState::TransitionIfApt() {
    return false;
}

bool UFGKState::ShouldReplicateTransitions() const {
    return false;
}

bool UFGKState::ShouldConsiderTransitionsLocally() const {
    return false;
}

void UFGKState::RefreshContext() {
}

void UFGKState::PrepareForPotentialActivation() {
}





void UFGKState::MarkDirtyForReplication() {
}

bool UFGKState::IsHub() const {
    return false;
}

bool UFGKState::IsFinished() const {
    return false;
}

bool UFGKState::IsActive() const {
    return false;
}

bool UFGKState::IsAborted() const {
    return false;
}

void UFGKState::Init(AActor* ActorOwnerParam, UFGKActorFSMComponent* ComponentOwnerParam, UFGKState* ParentParam, const FFGKHashedString& IDParam) {
}

bool UFGKState::HasAuthority() const {
    return false;
}

float UFGKState::GetTimeActive() const {
    return 0.0f;
}

FString UFGKState::GetStateDebugString() const {
    return TEXT("");
}

UFGKState* UFGKState::GetParent() const {
    return NULL;
}

FName UFGKState::GetID() const {
    return NAME_None;
}

FString UFGKState::GetHierarchyOutlineString(int32 IndentLevel) const {
    return TEXT("");
}

FName UFGKState::GetHierarchyID() const {
    return NAME_None;
}

FFGKHashedString UFGKState::GetHashedID() const {
    return FFGKHashedString{};
}

uint16 UFGKState::GetFlatHierarchyIndex() const {
    return 0;
}

TArray<UFGKState*> UFGKState::GetDeepestActiveStates() const {
    return TArray<UFGKState*>();
}

FString UFGKState::GetDebugChecksum() const {
    return TEXT("");
}

float UFGKState::GetCooldownRemaining() const {
    return 0.0f;
}

float UFGKState::GetCooldown() const {
    return 0.0f;
}

FString UFGKState::GetConciseFSMDebugString() const {
    return TEXT("");
}

UFGKActorFSMComponent* UFGKState::GetComponentOwner() const {
    return NULL;
}

TArray<UFGKState*> UFGKState::GetChildren() const {
    return TArray<UFGKState*>();
}

UFGKState* UFGKState::GetChildByID(FName ChildID) const {
    return NULL;
}

TArray<UFGKState*> UFGKState::GetAllStates(TSubclassOf<UFGKState> StateClass) {
    return TArray<UFGKState*>();
}

bool UFGKState::GetAllChildrenActive() const {
    return false;
}

AActor* UFGKState::GetActorOwner() const {
    return NULL;
}

uint8 UFGKState::GetActiveChildIndex() const {
    return 0;
}

FFGKHashedString UFGKState::GetActiveChildID() const {
    return FFGKHashedString{};
}

UFGKState* UFGKState::GetActiveChild() {
    return NULL;
}

void UFGKState::Finish() {
}

void UFGKState::End() {
}

void UFGKState::ClearCooldownTimer() {
}

bool UFGKState::ChangeState(UFGKState* NewActiveChild, bool bReplicateTransition) {
    return false;
}

bool UFGKState::CanActivate() const {
    return false;
}

void UFGKState::Begin() {
}

void UFGKState::Abort() {
}

void UFGKState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKState, Parent);
    DOREPLIFETIME(UFGKState, ID);
}


