#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorOfferTemplateRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOfferTemplateRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    FMorOfferTemplateRowHandle();
};

