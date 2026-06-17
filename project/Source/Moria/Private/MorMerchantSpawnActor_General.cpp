#include "MorMerchantSpawnActor_General.h"
#include "Components/SceneComponent.h"

AMorMerchantSpawnActor_General::AMorMerchantSpawnActor_General(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


