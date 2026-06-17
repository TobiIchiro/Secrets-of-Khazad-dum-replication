#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorWorldLevelData.h"
#include "MorWorldUnlockData.h"
#include "MorWorldLevelDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLevelDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldLevelData LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldUnlockData UnlockData;
    
    FMorWorldLevelDefinition();
};

