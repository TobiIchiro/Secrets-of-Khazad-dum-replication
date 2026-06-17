#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorZoneBubbleFilter.generated.h"

USTRUCT(BlueprintType)
struct FMorZoneBubbleFilter : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Whitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Blacklist;
    
    MORIA_API FMorZoneBubbleFilter();
};

