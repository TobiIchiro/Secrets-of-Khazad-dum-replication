#include "MorAccountDataManager.h"

UMorAccountDataManager::UMorAccountDataManager() {
}

void UMorAccountDataManager::UpdateFromEntitlement(const FName& EntitlementID, const FMorEntitlementStatus& Status) {
}

void UMorAccountDataManager::StoreShownEntitlementId(const FName& EntitlementID, const bool bSave) {
}

void UMorAccountDataManager::StoreMainMenuPurchasedShownEntitlementId(const FName& EntitlementID, const bool bSave) {
}

void UMorAccountDataManager::RemoveMainMenuPurchasedShownEntitlementId(const FName& EntitlementID, const bool bSave) {
}

bool UMorAccountDataManager::HasUnshownEntitlementIds() const {
    return false;
}

TArray<FMorEntitlementRecord> UMorAccountDataManager::GetUnshownEntitlementIds() {
    return TArray<FMorEntitlementRecord>();
}

int32 UMorAccountDataManager::GetMainMenuBuyEntitlementDisplayedCount(const FName& EntitlementID) {
    return 0;
}

bool UMorAccountDataManager::GetHasShownMainMenuPurchasedEntitlementId(const FName& EntitlementID) {
    return false;
}

UMorAccountDataManager* UMorAccountDataManager::Get(const UObject* WorldContext) {
    return NULL;
}

int32 UMorAccountDataManager::AddMainMenuBuyEntitlement(const FName& EntitlementID, const bool bSave) {
    return 0;
}


