#include "MorBossBattleMusicActor.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

AMorBossBattleMusicActor::AMorBossBattleMusicActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("MusicAkComponent"));
    this->MusicAkComponent = (UAkComponent*)RootComponent;
    this->StartMusicEvent = NULL;
    this->StopMusicEvent = NULL;
    this->CurrentState = EMorBossBattleMusicState::None;
    this->bMusicPlaying = false;
}

void AMorBossBattleMusicActor::StopMusic() {
}

void AMorBossBattleMusicActor::StartMusic() {
}

void AMorBossBattleMusicActor::SetMusicState(EMorBossBattleMusicState NewBossBattleState) {
}

void AMorBossBattleMusicActor::OnRep_CurrentState() {
}

void AMorBossBattleMusicActor::OnRep_bMusicPlaying() {
}

void AMorBossBattleMusicActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorBossBattleMusicActor, CurrentState);
    DOREPLIFETIME(AMorBossBattleMusicActor, bMusicPlaying);
}


