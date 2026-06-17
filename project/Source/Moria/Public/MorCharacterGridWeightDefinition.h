#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorCharacterGridWeightDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCharacterGridWeightDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridWeight;
    
    FMorCharacterGridWeightDefinition();
};

