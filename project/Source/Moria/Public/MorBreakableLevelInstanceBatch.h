#pragma once
#include "CoreMinimal.h"
#include "MorBreakableLevelInstance.h"
#include "MorInstantiableBreakable.h"
#include "MorBreakableLevelInstanceBatch.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableLevelInstanceBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInstantiableBreakable Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBreakableLevelInstance> Instances;
    
    FMorBreakableLevelInstanceBatch();
};

