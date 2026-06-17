#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorZoneFilterDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneFilterDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Zones;
    
    FMorZoneFilterDefinition();
};

