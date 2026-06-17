#include "MorArchitectureRoomVolume.h"
#include "Components/SceneComponent.h"
#include "MorArchitectureRoomComponent.h"

AMorArchitectureRoomVolume::AMorArchitectureRoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SpriteComponent = NULL;
    this->RoomComponent = CreateDefaultSubobject<UMorArchitectureRoomComponent>(TEXT("Component"));
}


