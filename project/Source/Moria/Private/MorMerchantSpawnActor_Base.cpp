#include "MorMerchantSpawnActor_Base.h"
#include "MorAISpawnerComponent.h"

AMorMerchantSpawnActor_Base::AMorMerchantSpawnActor_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForcePresenceAndSpawn = false;
    this->SpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->SpawnMode = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

void AMorMerchantSpawnActor_Base::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}


