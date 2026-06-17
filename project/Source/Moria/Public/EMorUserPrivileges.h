#pragma once
#include "CoreMinimal.h"
#include "EMorUserPrivileges.generated.h"

UENUM(BlueprintType)
enum class EMorUserPrivileges : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
    CanUserCrossPlay,
};

