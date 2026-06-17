#include "MorEntitlementManager.h"

UMorEntitlementManager::UMorEntitlementManager() {
}

EMorEntitlementPurchaseResult UMorEntitlementManager::PurchaseEntitlementAsync(const FName& EntitlementID) {
    return EMorEntitlementPurchaseResult::Failed;
}

bool UMorEntitlementManager::IsEntitlementDurinsFolkUsable() const {
    return false;
}

bool UMorEntitlementManager::IsEntitlementDurinsFolkOwnedAndEnabledForWorld() const {
    return false;
}

bool UMorEntitlementManager::IsEntitlementDurinsFolkOwned() const {
    return false;
}

TArray<FMorEntitlementRecord> UMorEntitlementManager::GetUsableOptionalEntitlementRecordsMissingOrDisabledInConfig(const FMorWorldLayoutConfigOptionalEntitlements& ConfigEntitlements) {
    return TArray<FMorEntitlementRecord>();
}

TArray<FMorEntitlementRecord> UMorEntitlementManager::GetOwnedEntitlementRecords() {
    return TArray<FMorEntitlementRecord>();
}

TArray<FMorEntitlementRecord> UMorEntitlementManager::GetNotUsableOptionalEntitlementRecordsEnabledInConfig(const FMorWorldLayoutConfigOptionalEntitlements& ConfigEntitlements) {
    return TArray<FMorEntitlementRecord>();
}

bool UMorEntitlementManager::GetIsOptionalEntitlementOwnedAndEnabledForWorldHandle(const FMorEntitlementRowHandle& EntitlementID) const {
    return false;
}

bool UMorEntitlementManager::GetIsOptionalEntitlementOwnedAndEnabledForWorld(const FName& EntitlementID) const {
    return false;
}

bool UMorEntitlementManager::GetIsEntitlementUsableRowHandle(const FMorEntitlementRowHandle& EntitlementID) const {
    return false;
}

bool UMorEntitlementManager::GetIsEntitlementUsable(const FName& EntitlementID) const {
    return false;
}

bool UMorEntitlementManager::GetIsEntitlementOwnedRowHandle(const FMorEntitlementRowHandle& EntitlementID) const {
    return false;
}

bool UMorEntitlementManager::GetIsEntitlementOwned(const FName& EntitlementID) const {
    return false;
}

FMorEntitlementStatus UMorEntitlementManager::GetEntitlementStatus(const FName& EntitlementID) {
    return FMorEntitlementStatus{};
}

TMap<FName, FMorEntitlementDefinition> UMorEntitlementManager::GetEntitlementsMap() const {
    return TMap<FName, FMorEntitlementDefinition>();
}

TArray<FMorEntitlementRecord> UMorEntitlementManager::GetEntitlements() const {
    return TArray<FMorEntitlementRecord>();
}

UMorEntitlementManager* UMorEntitlementManager::Get(const UObject* WorldContext) {
    return NULL;
}

void UMorEntitlementManager::EnableEntitlement(const FName& EntitlementID) {
}

void UMorEntitlementManager::DisableEntitlement(const FName& EntitlementID) {
}


