#include "MorBreadcrumbsSubsystemBase.h"

UMorBreadcrumbsSubsystemBase::UMorBreadcrumbsSubsystemBase() {
}

void UMorBreadcrumbsSubsystemBase::UnbindFromCountsChangedEvent(FGameplayTagContainer CategoryTags, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy) {
}

void UMorBreadcrumbsSubsystemBase::UnbindFromCountChangedEvent(FGameplayTag CategoryTag, FName CategoryName, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy) {
}

bool UMorBreadcrumbsSubsystemBase::RecordBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName) {
    return false;
}

bool UMorBreadcrumbsSubsystemBase::HasBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName) const {
    return false;
}

int32 UMorBreadcrumbsSubsystemBase::GetBreadcrumbCounts(FGameplayTagContainer CategoryTags, EMorBreadcrumbCountStrategy CountStrategy) const {
    return 0;
}

int32 UMorBreadcrumbsSubsystemBase::GetBreadcrumbCount(FGameplayTag CategoryTag, FName CategoryName, EMorBreadcrumbCountStrategy CountStrategy) const {
    return 0;
}

void UMorBreadcrumbsSubsystemBase::ClearBreadcrumbs(FGameplayTagContainer CategoryTags) {
}

bool UMorBreadcrumbsSubsystemBase::ClearBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName) {
    return false;
}

void UMorBreadcrumbsSubsystemBase::BindToCountsChangedEvent(FGameplayTagContainer CategoryTags, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy) {
}

void UMorBreadcrumbsSubsystemBase::BindToCountChangedEvent(FGameplayTag CategoryTag, FName CategoryName, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy) {
}


