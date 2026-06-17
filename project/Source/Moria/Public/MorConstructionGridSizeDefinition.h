#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorConstructionGridSizeDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionGridSizeDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSize;
    
    FMorConstructionGridSizeDefinition();
};

