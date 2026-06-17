#include "MorVoxelInvoker.h"
#include "VoxelSimpleInvokerComponent.h"

AMorVoxelInvoker::AMorVoxelInvoker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVoxelSimpleInvokerComponent>(TEXT("Voxel_Invoker"));
    this->VoxelInvoker = (UVoxelSimpleInvokerComponent*)RootComponent;
}


