#include "OreVolumeDecal.h"
#include "OreVolumeDecalComponent.h"

AOreVolumeDecal::AOreVolumeDecal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UOreVolumeDecalComponent>(TEXT("Ore Decal"));
    this->PrimaryDecalComponent = (UOreVolumeDecalComponent*)RootComponent;
    this->SecondaryDecalComponent = CreateDefaultSubobject<UOreVolumeDecalComponent>(TEXT("Second Ore Decal"));
    this->MineralProps = NULL;
    this->OreVolumeTexture = NULL;
}


