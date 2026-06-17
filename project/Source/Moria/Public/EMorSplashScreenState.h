#pragma once
#include "CoreMinimal.h"
#include "EMorSplashScreenState.generated.h"

UENUM(BlueprintType)
enum class EMorSplashScreenState : uint8 {
    None,
    WaitingForStartupMovies,
    ReadyToPlaySplash,
    Playing,
    Ended,
};

