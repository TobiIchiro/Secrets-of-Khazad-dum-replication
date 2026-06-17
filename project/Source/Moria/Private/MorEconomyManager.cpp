#include "MorEconomyManager.h"
#include "Net/UnrealNetwork.h"

AMorEconomyManager::AMorEconomyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TuningData = NULL;
    this->CurrentDay = 0;
}

void AMorEconomyManager::ServerUpdate(int32 Day) {
}

void AMorEconomyManager::ProgressUpdate(const FMorProgressRowHandle& ProgressKey, int32 Value) {
}

void AMorEconomyManager::OnRep_MerchantStalls() {
}

void AMorEconomyManager::OnRep_MerchantInfos() {
}

void AMorEconomyManager::OnRep_AccountBalance(const TArray<FMorCurrencyAmount>& OldBalances) {
}

bool AMorEconomyManager::HasOrderForRecipe(const FMorItemRecipeDefinition& RecipeDef) const {
    return false;
}

void AMorEconomyManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorEconomyManager, MerchantStalls);
    DOREPLIFETIME(AMorEconomyManager, MerchantInfos);
    DOREPLIFETIME(AMorEconomyManager, AccountBalances);
}


