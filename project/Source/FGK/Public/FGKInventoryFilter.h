#pragma once
#include "CoreMinimal.h"
#include "SoftItemCount.h"
#include "FGKInventoryFilter.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKInventoryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftItemCount> AllowedCounts;
    
    FFGKInventoryFilter();
};

