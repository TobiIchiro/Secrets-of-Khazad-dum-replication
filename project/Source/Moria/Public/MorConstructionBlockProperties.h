#pragma once
#include "CoreMinimal.h"
#include "MorConstructionSnapProperties.h"
#include "MorConstructionStabilityProperties.h"
#include "MorConstructionBlockProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorConstructionBlockProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionStabilityProperties Stability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionSnapProperties Snap;
    
    FMorConstructionBlockProperties();
};

