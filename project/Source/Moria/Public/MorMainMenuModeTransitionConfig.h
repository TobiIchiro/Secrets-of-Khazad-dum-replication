#pragma once
#include "CoreMinimal.h"
#include "EMorMainMenuMode.h"
#include "MorMainMenuModeTransitionSettings.h"
#include "MorMainMenuModeTransitionConfig.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMainMenuModeTransitionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMainMenuMode FromMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMainMenuMode ToMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMainMenuModeTransitionSettings Settings;
    
    FMorMainMenuModeTransitionConfig();
};

