#pragma once
#include "CoreMinimal.h"
#include "ENpcBrewTransportType.generated.h"

UENUM(BlueprintType)
enum class ENpcBrewTransportType : uint8 {
    None,
    StartAleTransportation,
    AbortAleTransportation,
    FillTavernKeg,
};

