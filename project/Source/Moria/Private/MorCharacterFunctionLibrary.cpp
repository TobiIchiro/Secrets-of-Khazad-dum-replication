#include "MorCharacterFunctionLibrary.h"

UMorCharacterFunctionLibrary::UMorCharacterFunctionLibrary() {
}

void UMorCharacterFunctionLibrary::KnockbackPlayers(UObject* WorldContextObject, FVector KnockbackLocation, float KnockbackRadius, float KnockbackForce) {
}

USurvivalSettings* UMorCharacterFunctionLibrary::GetSurvivalSettings(const ACharacter* Character) {
    return NULL;
}

void UMorCharacterFunctionLibrary::GetMaxStaminaBlockedByLowLight(const ACharacter* Character, int32& OutPips, float& OutUnits) {
}

float UMorCharacterFunctionLibrary::GetMaxEnergyBlockedByLowLight(const ACharacter* Character) {
    return 0.0f;
}

float UMorCharacterFunctionLibrary::GetLightDangerThreshold(const ACharacter* Character) {
    return 0.0f;
}


