#include "ArchitectureProxy.h"
#include "Components/SceneComponent.h"

AArchitectureProxy::AArchitectureProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->bDeleteInStandalone = true;
    this->bAlwaysDelete = true;
    this->Probability = 1.00f;
    this->PreviewConfig = NULL;
    this->DecorationConfig = NULL;
    this->DecoBlockingVolume = NULL;
    this->bPreviewDecoLayers = false;
    this->bDebugDrawDecoSurfaces = false;
    this->bDebugDrawStability = false;
}

void AArchitectureProxy::Cleanup() {
}


