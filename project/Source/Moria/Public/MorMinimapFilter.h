#pragma once
#include "CoreMinimal.h"
#include "MorMinimapFilter.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMinimapFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterToFilterBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterName;
    
    FMorMinimapFilter();
};

