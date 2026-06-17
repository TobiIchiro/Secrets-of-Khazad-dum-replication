#include "GlobalInstancedLevelCatalog.h"
#include "Components/SceneComponent.h"

AGlobalInstancedLevelCatalog::AGlobalInstancedLevelCatalog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
}


