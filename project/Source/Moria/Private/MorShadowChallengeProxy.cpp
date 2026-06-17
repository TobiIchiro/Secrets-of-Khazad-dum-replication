#include "MorShadowChallengeProxy.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AMorShadowChallengeProxy::AMorShadowChallengeProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bDeleteInStandalone = false;
    this->bAlwaysDelete = false;
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    this->Trigger->SetupAttachment(RootComponent);
}


