#include "VoxelLODVolume.h"
#include "VoxelVolumeInvokerComponent.h"

AVoxelLODVolume::AVoxelLODVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvokerComponent = CreateDefaultSubobject<UVoxelVolumeInvokerComponent>(TEXT("Invoker Component"));
    this->InvokerComponent->SetupAttachment(RootComponent);
}


