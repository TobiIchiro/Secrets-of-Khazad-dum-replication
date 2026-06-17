#include "MorAnalyticsManager.h"

UMorAnalyticsManager::UMorAnalyticsManager() {
    this->AccountDataManager = NULL;
    this->EntitlementManager = NULL;
    this->BackendUsesSSL = true;
    this->BackendUri = TEXT("mor-analytics-live-941107368707.us-east1.run.app");
    this->HeartbeatFrequencySeconds = 30;
}

void UMorAnalyticsManager::OnEntitlementStatusUpdated(const FName& EntitlementID, const FMorEntitlementStatus& Status) {
}

void UMorAnalyticsManager::OnCultureChanged() {
}


