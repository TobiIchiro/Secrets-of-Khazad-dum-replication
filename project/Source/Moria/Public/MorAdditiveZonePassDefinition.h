#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAdditiveZonePassDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAdditiveZonePassDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    FMorAdditiveZonePassDefinition();
};

