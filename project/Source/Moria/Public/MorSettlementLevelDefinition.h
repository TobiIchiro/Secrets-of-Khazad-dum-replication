#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorSettlementLevelData.h"
#include "MorSettlementUnlockData.h"
#include "MorSettlementLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementLevelDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementUnlockData UnlockData;
    
    FMorSettlementLevelDefinition();
};

