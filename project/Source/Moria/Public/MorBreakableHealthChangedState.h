#pragma once
#include "CoreMinimal.h"
#include "MorBreakableHealthChangedState.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableHealthChangedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChangeReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAffectedByBiome;
    
    FMorBreakableHealthChangedState();
};

