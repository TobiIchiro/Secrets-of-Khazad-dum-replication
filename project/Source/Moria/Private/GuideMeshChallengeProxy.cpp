#include "GuideMeshChallengeProxy.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGuideMeshChallengeProxy::AGuideMeshChallengeProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bDeleteInStandalone = false;
    this->bAlwaysDelete = false;
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    this->Challenge = NULL;
    this->Trigger->SetupAttachment(RootComponent);
}

void AGuideMeshChallengeProxy::EndOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I) {
}

void AGuideMeshChallengeProxy::BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I, bool bArg, const FHitResult& HitResult) {
}


