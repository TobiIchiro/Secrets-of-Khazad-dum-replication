#include "MorArchBlockMeshActor.h"
#include "MorArchBlockMeshComponent.h"

AMorArchBlockMeshActor::AMorArchBlockMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockMeshComponent = CreateDefaultSubobject<UMorArchBlockMeshComponent>(TEXT("Block Mesh Component"));
}


