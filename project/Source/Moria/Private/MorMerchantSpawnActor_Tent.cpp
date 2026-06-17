#include "MorMerchantSpawnActor_Tent.h"
#include "Components/BoxComponent.h"

AMorMerchantSpawnActor_Tent::AMorMerchantSpawnActor_Tent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
}


