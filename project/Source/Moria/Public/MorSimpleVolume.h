#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorSimpleShape.h"
#include "MorSimpleVolume.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSimpleVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSimpleShape Shape;
    
public:
    FMorSimpleVolume();
};

