#pragma once
#include "CoreMinimal.h"
#include "MorZoneRowHandle.h"
#include "ZonePair.generated.h"

USTRUCT(BlueprintType)
struct FZonePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle B;
    
    MORIA_API FZonePair();
};

