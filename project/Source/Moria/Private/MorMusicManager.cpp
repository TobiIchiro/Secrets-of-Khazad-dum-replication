#include "MorMusicManager.h"
#include "Net/UnrealNetwork.h"

AMorMusicManager::AMorMusicManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bUseMusicDucking = false;
    this->DuckedVolumeLevel = 20.00f;
    this->CurrentMusic = EMorMusic::None;
    this->CurrentBGM = EBGMType::None;
    this->SingingManager = NULL;
    this->BackgroundMusicManager = NULL;
    this->LoadingScreenManager = NULL;
    this->LocalDwarf = NULL;
    this->EnemyProximityForCombatMusic = 2000.00f;
    this->AllyProximityForCombatMusic = 2000.00f;
    this->NumEnemyToTriggerCombatBGM = 2;
    this->BGMSwitchDefault = NULL;
    this->BGMSwitchTension = NULL;
}

void AMorMusicManager::BGMCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AMorMusicManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMusicManager, DwarfCombatTracking);
}


