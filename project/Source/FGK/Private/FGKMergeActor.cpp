#include "FGKMergeActor.h"
#include "Components/StaticMeshComponent.h"

AFGKMergeActor::AFGKMergeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OptimizedMesh"));
    this->OptimizedMesh = NULL;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ChildHash = 0;
    this->bIsOptimized = false;
}

void AFGKMergeActor::ToggleOptimization() {
}

void AFGKMergeActor::SetChildActorsEnabled(bool bIsEnabled) {
}

void AFGKMergeActor::OnLevelActorDeleted(AActor* DeletedActor) {
}

void AFGKMergeActor::MergeActors(const TArray<AActor*>& Actors) {
}

void AFGKMergeActor::MergeActor(const AActor* Actor) {
}

FString AFGKMergeActor::GetOptimizedMeshPackageName() {
    return TEXT("");
}


