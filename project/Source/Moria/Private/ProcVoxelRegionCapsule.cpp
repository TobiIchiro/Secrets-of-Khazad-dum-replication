#include "ProcVoxelRegionCapsule.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"

AProcVoxelRegionCapsule::AProcVoxelRegionCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->bIsEditorOnlyActor = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComp"));
    const FProperty* p_CollisionComponent = GetClass()->FindPropertyByName("CollisionComponent");
    (*p_CollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = (UShapeComponent*)RootComponent;
}


