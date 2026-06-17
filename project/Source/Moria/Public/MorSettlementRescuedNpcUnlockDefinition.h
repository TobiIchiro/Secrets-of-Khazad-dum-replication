#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorSettlementUnlockData.h"
#include "MorSettlementRescuedNpcUnlockDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementRescuedNpcUnlockDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RescuedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementUnlockData UnlockData;
    
    FMorSettlementRescuedNpcUnlockDefinition();
};

