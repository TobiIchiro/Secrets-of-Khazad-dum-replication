#include "MorSettlementStone.h"
#include "MorBreakableComponent.h"
#include "MorNPCSettlementSpawnerComponent.h"
#include "Net/UnrealNetwork.h"

AMorSettlementStone::AMorSettlementStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettlementManager = NULL;
    this->NpcManager = NULL;
    this->SettlementId = 0;
    this->SettlementType = ESettlementType::Normal;
    this->SettlementEnterRange = 5000.00f;
    this->SettlementExitRange = 5750.00f;
    this->SettlementEnterDelayMinutes = 1.50f;
    this->TestLocalPlayerInSettlementDelaySeconds = 0.50f;
    this->SpawnerComponent = CreateDefaultSubobject<UMorNPCSettlementSpawnerComponent>(TEXT("NPCSettlementSpawner"));
    this->Breakable = CreateDefaultSubobject<UMorBreakableComponent>(TEXT("Breakable"));
    this->StartSongAbility = NULL;
    this->bLevelUpSongActive = false;
    this->bReadyForLevelUp = false;
}

void AMorSettlementStone::StoreActivityPoints(FGuid NpcGuid) {
}

void AMorSettlementStone::RequestLevelUpSong() {
}

void AMorSettlementStone::PreformMoveAction() {
}

void AMorSettlementStone::OnSingingDone(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}

void AMorSettlementStone::OnRep_SettlementId(uint32 OldSettlementId) {
}

void AMorSettlementStone::OnRep_ReadyForLevelUp(bool bWasReadyForLevelUp) {
}

void AMorSettlementStone::OnRep_DecorVariantIndexList() {
}

void AMorSettlementStone::OnBreak(bool bPreRuined) {
}

void AMorSettlementStone::Multicast_LevelUpEvent_Implementation() {
}

void AMorSettlementStone::JoinSong(AMorCharacter* Character) {
}

FText AMorSettlementStone::GetSettlementName() const {
    return FText::GetEmpty();
}

FMorSettlementLevelData AMorSettlementStone::GetCurrentLevelData() const {
    return FMorSettlementLevelData{};
}

void AMorSettlementStone::ChangeSettlementName(FText Name) {
}

bool AMorSettlementStone::CanLevelUp() const {
    return false;
}

void AMorSettlementStone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorSettlementStone, SettlementId);
    DOREPLIFETIME(AMorSettlementStone, DecorVariantIndexList);
    DOREPLIFETIME(AMorSettlementStone, bLevelUpSongActive);
    DOREPLIFETIME(AMorSettlementStone, bReadyForLevelUp);
}


