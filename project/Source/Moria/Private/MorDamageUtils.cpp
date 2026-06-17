#include "MorDamageUtils.h"

UMorDamageUtils::UMorDamageUtils() {
}

uint8 UMorDamageUtils::GetTierFromItem(const FItemHandle& ItemHandle) {
    return 0;
}

uint8 UMorDamageUtils::GetTierFromActor(const AActor* Actor) {
    return 0;
}

TArray<FGameplayTag> UMorDamageUtils::GetDamageTypes(const FItemHandle& ItemHandle) {
    return TArray<FGameplayTag>();
}

FGameplayTag UMorDamageUtils::GetDamageType(const FItemHandle& ItemHandle) {
    return FGameplayTag{};
}


