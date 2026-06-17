#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOfferDeckRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOfferDeckRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOfferDeckRowHandle();
};

