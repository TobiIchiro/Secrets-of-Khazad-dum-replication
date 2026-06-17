#pragma once
#include "CoreMinimal.h"
#include "MorBreakableLevelInstanceBatch.h"
#include "MorBreakableInstanceLevelCatalog.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableInstanceLevelCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBreakableLevelInstanceBatch> Batches;
    
    FMorBreakableInstanceLevelCatalog();
};

