#include "MorSettlementManager.h"
#include "Net/UnrealNetwork.h"

AMorSettlementManager::AMorSettlementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPCManagerCache = NULL;
    this->DiscoveryManagerCache = NULL;
    this->WaypointsManagerCache = NULL;
    this->WorldLayoutCache = NULL;
    this->NextValidId = 1;
    this->MaxSettlementLevelReached = 0;
    this->SettlementBlockCellRadius = 1;
    this->NumRecruitsToUnlockTier2 = 3;
    this->NumRecruitsToUnlockTier3 = 5;
    this->CurrentWorldLevel = 1;
    this->TotalNpcRecruitedCount = 0;
    this->TotalNpcRescuedCount = 0;
}

bool AMorSettlementManager::WasSettlementActivatedBefore(FMorSettlementHandle SettlementHandle) const {
    return false;
}

void AMorSettlementManager::OnRep_SettlementNPCDataArray() {
}

void AMorSettlementManager::OnRep_SettlementDataArray() {
}

void AMorSettlementManager::OnRep_MonumentDataArray() {
}

void AMorSettlementManager::OnRep_ActiveSettlements(const TArray<uint32>& OldActiveSettlements) {
}

void AMorSettlementManager::Multicast_NpcMoved_Implementation(FGuid NpcGuid, uint32 FromSettlementId, uint32 ToSettlementId, int32 FromSettlementNpcCount, int32 ToSettlementNpcCount) {
}

void AMorSettlementManager::Multicast_LevelUpReadyEvent_Implementation(uint32 SettlementId, int32 Level) {
}

void AMorSettlementManager::Multicast_LevelUpEvent_Implementation(uint32 SettlementId, int32 Level) {
}

void AMorSettlementManager::Multicast_ActivityPointsGained_Implementation(uint32 SettlementId) {
}

void AMorSettlementManager::ManuallyDeactivateSettlement(FMorSettlementHandle SettlmenetHandle) {
}

bool AMorSettlementManager::IsValidSettlementHandle(FMorSettlementHandle SettlementHandle) const {
    return false;
}

bool AMorSettlementManager::IsSettlementLoaded(FMorSettlementHandle SettlementHandle) const {
    return false;
}

bool AMorSettlementManager::IsSettlementFull(FMorSettlementHandle SettlementHandle) const {
    return false;
}

bool AMorSettlementManager::IsActiveSettlement(FMorSettlementHandle SettlementHandle) const {
    return false;
}

bool AMorSettlementManager::HasActiveSettlements() const {
    return false;
}

int32 AMorSettlementManager::GetStartingSettlementLevel() const {
    return 0;
}

ESettlementType AMorSettlementManager::GetSettlementType(FMorSettlementHandle SettlementHandle) const {
    return ESettlementType::Normal;
}

FMorSettlementProgressionData AMorSettlementManager::GetSettlementProgressionData(FMorSettlementHandle SettlementHandle) const {
    return FMorSettlementProgressionData{};
}

int32 AMorSettlementManager::GetSettlementNpcCount(FMorSettlementHandle SettlementHandle) const {
    return 0;
}

FText AMorSettlementManager::GetSettlementName(FMorSettlementHandle SettlementHandle) const {
    return FText::GetEmpty();
}

FMorSettlementHandle AMorSettlementManager::GetSettlementHandleFromWaypointId(int32 WaypointId) const {
    return FMorSettlementHandle{};
}

FMorSettlementHandle AMorSettlementManager::GetSettlementHandleFromStone(AMorSettlementStone* SettlementStone) const {
    return FMorSettlementHandle{};
}

TArray<FMorNpcUIData> AMorSettlementManager::GetRescuedNpcUIData() const {
    return TArray<FMorNpcUIData>();
}

int32 AMorSettlementManager::GetNpcWorldCount() const {
    return 0;
}

FMorSettlementHandle AMorSettlementManager::GetNpcSettlementHandle(const FGuid& NpcGuid) const {
    return FMorSettlementHandle{};
}

int32 AMorSettlementManager::GetMaxNpcsInWorld() const {
    return 0;
}

int32 AMorSettlementManager::GetMaxNpcsForSettlement(FMorSettlementHandle SettlementHandle) const {
    return 0;
}

int32 AMorSettlementManager::GetMaxActiveSettlementsAllowed() const {
    return 0;
}

int32 AMorSettlementManager::GetCurrentWorldLevel() const {
    return 0;
}

int32 AMorSettlementManager::GetCurrentSettlementLevelCap() const {
    return 0;
}

float AMorSettlementManager::GetCowerChangeForSettlement(FMorSettlementHandle SettlementHandle) const {
    return 0.0f;
}

TArray<FMorSettlementHandle> AMorSettlementManager::GetAllSettlementHandles() const {
    return TArray<FMorSettlementHandle>();
}

TArray<FMorSettlementHandle> AMorSettlementManager::GetActiveSettlementHandles() const {
    return TArray<FMorSettlementHandle>();
}

int32 AMorSettlementManager::GetActiveSettlementCount() const {
    return 0;
}

bool AMorSettlementManager::Equality_SettlementHandle(FMorSettlementHandle A, FMorSettlementHandle B) {
    return false;
}

void AMorSettlementManager::DespawnRecruitedWanderer() {
}

bool AMorSettlementManager::CanPatrolInSettlement(FMorSettlementHandle SettlementHandle) const {
    return false;
}

bool AMorSettlementManager::CanAssignBedsInSettlement(FMorSettlementHandle SettlementHandle) const {
    return false;
}

void AMorSettlementManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorSettlementManager, MaxSettlementLevelReached);
    DOREPLIFETIME(AMorSettlementManager, ActiveSettlements);
    DOREPLIFETIME(AMorSettlementManager, CurrentWorldLevel);
    DOREPLIFETIME(AMorSettlementManager, TotalNpcRecruitedCount);
    DOREPLIFETIME(AMorSettlementManager, TotalNpcRescuedCount);
    DOREPLIFETIME(AMorSettlementManager, SettlementDataArray);
    DOREPLIFETIME(AMorSettlementManager, SettlementNPCDataArray);
    DOREPLIFETIME(AMorSettlementManager, MonumentDataArray);
}


