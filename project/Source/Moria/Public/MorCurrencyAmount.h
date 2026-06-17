#pragma once
#include "CoreMinimal.h"
#include "MorCurrencyRowHandle.h"
#include "MorCurrencyAmount.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCurrencyAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorCurrencyRowHandle Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FMorCurrencyAmount();
};

