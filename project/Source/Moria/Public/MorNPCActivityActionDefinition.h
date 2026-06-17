#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorNPCActivityActionDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCActivityActionDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivityPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownHours;
    
    FMorNPCActivityActionDefinition();
};

