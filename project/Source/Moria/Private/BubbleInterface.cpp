#include "BubbleInterface.h"

ABubbleInterface::ABubbleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Direction = ECellDirection::East;
    this->Interface = EBubbleInterface::Closed;
    this->bAllowRandomDirtPlug = true;
    this->bZoneInternal = true;
    this->bZoneExternal = true;
    this->bConfirmLocation = false;
    this->bAllowOverlappingInterfaces = false;
    this->Mode = EInterfaceDebug::Normal;
    this->SpriteComponent = NULL;
}


