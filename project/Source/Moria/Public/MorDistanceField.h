#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorDistanceField.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDistanceField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Distance;
    
    FMorDistanceField();
};

