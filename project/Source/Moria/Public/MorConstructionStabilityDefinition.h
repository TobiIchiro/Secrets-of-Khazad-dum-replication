#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorConstructionStabilityDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionStabilityDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalDistance;
    
    FMorConstructionStabilityDefinition();
};

