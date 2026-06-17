#include "MorLevelSequenceSpawner.h"
#include "Net/UnrealNetwork.h"

UMorLevelSequenceSpawner::UMorLevelSequenceSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequenceActorClass = NULL;
    this->LevelSequenceActor = NULL;
    this->bOverrideTransformOrigin = true;
}

void UMorLevelSequenceSpawner::SetLevelSequenceActor(AMorLevelSequenceActor* InLevelSequenceActor) {
}

void UMorLevelSequenceSpawner::PlaySequence() {
}

void UMorLevelSequenceSpawner::HandleOnLevelSequenceActorChanged() {
}

ULevelSequencePlayer* UMorLevelSequenceSpawner::GetSequencePlayer() const {
    return NULL;
}

void UMorLevelSequenceSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorLevelSequenceSpawner, LevelSequenceActor);
}


