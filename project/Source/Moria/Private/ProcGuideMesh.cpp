#include "ProcGuideMesh.h"
#include "Components/SceneComponent.h"

AProcGuideMesh::AProcGuideMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->GuideMesh = NULL;
}


