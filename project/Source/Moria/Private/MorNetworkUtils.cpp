#include "MorNetworkUtils.h"

UMorNetworkUtils::UMorNetworkUtils() {
}

bool UMorNetworkUtils::IsNetUserIdValid(const FMorNetUserId& NetUserId) {
    return false;
}

FText UMorNetworkUtils::GetPlayerDisplayName(const AActor* Actor) {
    return FText::GetEmpty();
}

FText UMorNetworkUtils::GetCharacterName(const AActor* Actor, bool bUseUGC) {
    return FText::GetEmpty();
}


