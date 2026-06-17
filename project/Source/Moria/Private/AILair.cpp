#include "AILair.h"
#include "Components/SceneComponent.h"
#include "MorAISpawnerComponent.h"

AAILair::AAILair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bLairBeginPlayCalled = false;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->bHasASpawnRaisedTheAlarmRecently = false;
    this->bShouldAlwaysUseOverridePopulationRow = false;
    this->BeginPlayRequiredState = EBubbleState::ReadyToActivate;
    this->bIsUsedInWhitebox = false;
    this->PatrolSquad = NULL;
    this->GuardSquad = NULL;
    this->IdleSquad = NULL;
    this->SpawnedEncounter = NULL;
    this->LookForActivatorDistance = 2000.00f;
    this->Spawning = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
}

void AAILair::TriggerSpawns() {
}

bool AAILair::TriggerEncounter(AMorCharacter* TargetDwarf) {
    return false;
}

void AAILair::OnWorldGenDone() {
}

void AAILair::OnSpawnedDeadOrDestroyed(AActor* SpawnedActor) {
}

void AAILair::OnScreamTimerEnded() {
}

void AAILair::OnPatrolSpawnFinished(AMorCharacter* SpawnedCharacter) {
}

void AAILair::OnIdleInBaseSpawnFinished(AMorCharacter* SpawnedCharacter) {
}

void AAILair::OnGuardBaseSpawnFinished(AMorCharacter* SpawnedCharacter) {
}

void AAILair::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

int32 AAILair::GetUnitCount() {
    return 0;
}

TArray<AMorCharacter*> AAILair::GetSpawnedCharacters(float Radius) const {
    return TArray<AMorCharacter*>();
}

int32 AAILair::GetQueuedCount() const {
    return 0;
}

bool AAILair::GetHasASpawnRaisedTheAlarmRecently() {
    return false;
}

FText AAILair::GetDisplayStatus() {
    return FText::GetEmpty();
}

TArray<AMorCharacter*> AAILair::GetCurrentSpawns() {
    return TArray<AMorCharacter*>();
}


