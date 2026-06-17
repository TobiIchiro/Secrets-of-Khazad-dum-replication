#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAnyItemRowHandle.h"
#include "MorFuelDefinition.generated.h"

USTRUCT(BlueprintType)
struct FMorFuelDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriorityBraziers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriorityCrafting;
    
    MORIA_API FMorFuelDefinition();
};

