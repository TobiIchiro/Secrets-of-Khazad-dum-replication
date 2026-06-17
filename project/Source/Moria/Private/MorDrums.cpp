#include "MorDrums.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

AMorDrums::AMorDrums(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("DrumAkComponent"));
    this->DrumAkComponent = (UAkComponent*)RootComponent;
    this->StartDrumsEvent = NULL;
    this->StopDrumsEvent = NULL;
    this->InterpSpeed = 10.00f;
    this->StartDepth = 5000.00f;
    this->StartHorizontalOffset = 5000.00f;
    this->PostEncounterDestroyTimer = 10.00f;
    this->DrumsStartSwitch = NULL;
    this->DrumsBuildSwitch = NULL;
    this->BattleStartSwitch = NULL;
    this->BattleWinningSwitch = NULL;
    this->BattleLosingSwitch = NULL;
    this->BattleVictorySwitch = NULL;
    this->BattleDefeatSwitch = NULL;
    this->TargetActor = NULL;
    this->CurrentState = EMorDrumsState::None;
    this->bDrumsPlaying = false;
}

void AMorDrums::OnRep_CurrentState() {
}

void AMorDrums::OnRep_bDrumsPlaying() {
}

void AMorDrums::OnEncounterStateChanged(EMorAIWaveEncounterState OldState, EMorAIWaveEncounterState NewState) {
}

void AMorDrums::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorDrums, TargetActor);
    DOREPLIFETIME(AMorDrums, TargetLocation);
    DOREPLIFETIME(AMorDrums, CurrentState);
    DOREPLIFETIME(AMorDrums, bDrumsPlaying);
}


