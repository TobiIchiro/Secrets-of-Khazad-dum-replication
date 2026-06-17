#include "MorFreeCameraSpectator.h"
#include "Camera/CameraComponent.h"

AMorFreeCameraSpectator::AMorFreeCameraSpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreeCameraController = NULL;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->PlayerCharacter = NULL;
    this->CameraComponent->SetupAttachment(RootComponent);
}


