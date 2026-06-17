#include "VoxelDisableEditsBox.h"
#include "Components/BoxComponent.h"

AVoxelDisableEditsBox::AVoxelDisableEditsBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->Box = (UBoxComponent*)RootComponent;
}


