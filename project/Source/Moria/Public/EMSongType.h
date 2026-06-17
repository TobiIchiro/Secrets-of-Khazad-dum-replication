#pragma once
#include "CoreMinimal.h"
#include "EMSongType.generated.h"

UENUM(BlueprintType)
enum class EMSongType : uint8 {
    None,
    Social,
    Mining,
    Keg,
    Combat,
    Veneration,
    Settlement,
    DoorLoreTOD,
    Monument,
};

