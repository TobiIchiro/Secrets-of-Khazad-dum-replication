#include "MorWorldSelectItem.h"

UMorWorldSelectItem::UMorWorldSelectItem() {
}

bool UMorWorldSelectItem::UpdateEntitlementConfigState(const FName& EntitlementID, bool bEnabled) {
    return false;
}

bool UMorWorldSelectItem::UpdateEntitlementConfigsState(const FMorWorldLayoutConfigOptionalEntitlements& Entitlements) {
    return false;
}

bool UMorWorldSelectItem::IsEntitlementEnabled(FMorEntitlementRowHandle Entitlement) const {
    return false;
}

ESaveCompatibility UMorWorldSelectItem::GetCompatibility() const {
    return ESaveCompatibility::Compatible;
}


