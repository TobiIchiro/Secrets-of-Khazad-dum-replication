#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorResourceLocator.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorResourceLocator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntVector BubbleRootCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StagingIndex;
    
public:
    FMorResourceLocator();
};

