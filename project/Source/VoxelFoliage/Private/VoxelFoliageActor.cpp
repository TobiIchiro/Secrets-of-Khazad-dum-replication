#include "VoxelFoliageActor.h"
#include "Components/StaticMeshComponent.h"
#include "VoxelPhysicsRelevancyComponent.h"

AVoxelFoliageActor::AVoxelFoliageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bAutomaticallySetMesh = true;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PhysicsRelevancyComponent = CreateDefaultSubobject<UVoxelPhysicsRelevancyComponent>(TEXT("VoxelPhysicsRelevancyComponent"));
}


