#pragma once
#include "CoreMinimal.h"
#include "MorTimedQueueItem.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTimedQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FMorTimedQueueItem();
};

