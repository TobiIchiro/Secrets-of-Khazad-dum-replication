#include "WorldReticle_ActorInfo.h"
#include "Components/SceneComponent.h"

AWorldReticle_ActorInfo::AWorldReticle_ActorInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ValidActor = CreateDefaultSubobject<USceneComponent>(TEXT("Valid"));
    this->InvalidActor = CreateDefaultSubobject<USceneComponent>(TEXT("Invalid"));
    this->InvalidActor->SetupAttachment(RootComponent);
    this->ValidActor->SetupAttachment(RootComponent);
}


