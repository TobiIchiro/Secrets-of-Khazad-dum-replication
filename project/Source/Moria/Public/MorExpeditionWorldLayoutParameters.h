#pragma once
#include "CoreMinimal.h"
#include "MorZoneRowHandle.h"
#include "MorExpeditionWorldLayoutParameters.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionWorldLayoutParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle StartZone;
    
    FMorExpeditionWorldLayoutParameters();
};

