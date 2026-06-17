#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorProxyRealizationData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMorProxyRealizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Realization;
    
    MORIA_API FMorProxyRealizationData();
};

