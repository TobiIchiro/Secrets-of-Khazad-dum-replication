#include "MorNPCManager.h"
#include "Net/UnrealNetwork.h"

AMorNPCManager::AMorNPCManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumNpcTraits = 2;
    this->HungryTime = 12;
    this->StarvingTime = 30;
    this->NeedsMealPredictionTime = 60;
    this->ShiftMinuteRange = 15;
    this->TuningData = NULL;
    this->NpcLeashRange = 64.00f;
    this->HordeAlertRadius = 40.00f;
    this->MaxActivityPoints = 50;
    this->SettlementManagerCache = NULL;
    this->TimeManagerCache = NULL;
    this->ConstructionManagerCache = NULL;
    this->LeashRangeSquared = 0.00f;
    this->CommonGreetingAccumulator = 3.00f;
}

void AMorNPCManager::ServerUpdateNpcTracking(int32 CurrentHour) {
}

void AMorNPCManager::OnWorldReady() {
}

void AMorNPCManager::OnRep_NpcInfo(FMorNPCInfoArray OldNpcInfo) {
}

void AMorNPCManager::MarkAllNpcAsRescued(bool bCorrectionLogic) {
}

bool AMorNPCManager::IsNpcRescued(const FGuid& NpcId) const {
    return false;
}

bool AMorNPCManager::IsNpcKidnapped(const FGuid& NpcId) const {
    return false;
}

void AMorNPCManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorNPCManager, NpcInfo);
}


