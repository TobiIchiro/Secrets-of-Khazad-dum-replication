#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorIsoMapPivotSpace.h"
#include "MorIsoMapPivot.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapPivot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorIsoMapPivotSpace PivotSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    FMorIsoMapPivot();
};

