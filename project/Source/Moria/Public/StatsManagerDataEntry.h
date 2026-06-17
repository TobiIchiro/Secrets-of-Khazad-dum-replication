#pragma once
#include "CoreMinimal.h"
#include "StatsManagerDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FStatsManagerDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    MORIA_API FStatsManagerDataEntry();
};

