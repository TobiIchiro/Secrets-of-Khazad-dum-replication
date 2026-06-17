#include "MorOreReceptacle.h"
#include "Components/SceneComponent.h"

AMorOreReceptacle::AMorOreReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->OreContainerToSpawn = NULL;
    this->BreakableOreContainer = NULL;
    this->bCanRespawn = true;
    this->SleepCountToRespawn = 1;
    this->CurrentNightCount = 0;
    this->LastNightCount = 0;
    this->bContainerSpawned = true;
    this->SceneRoot = (USceneComponent*)RootComponent;
}

void AMorOreReceptacle::OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds) {
}

void AMorOreReceptacle::OnOreContainerBroken(bool bPreRuined) {
}


