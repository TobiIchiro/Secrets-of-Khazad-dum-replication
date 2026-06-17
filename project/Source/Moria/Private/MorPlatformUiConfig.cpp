#include "MorPlatformUiConfig.h"

UMorPlatformUiConfig::UMorPlatformUiConfig() {
}

FSlateBrush UMorPlatformUiConfig::GetPlatformIconByString(const FString& PlatformName) const {
    return FSlateBrush{};
}

FSlateBrush UMorPlatformUiConfig::GetPlatformIcon(const FName& PlatformName) const {
    return FSlateBrush{};
}


