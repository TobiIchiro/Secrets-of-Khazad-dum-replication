#include "MorMerchantSpawnActor.h"
#include "Components/CapsuleComponent.h"

AMorMerchantSpawnActor::AMorMerchantSpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->bUseInventoryPreset = false;
}


