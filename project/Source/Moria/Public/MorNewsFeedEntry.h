#pragma once
#include "CoreMinimal.h"
#include "MorNewsFeedEntry.generated.h"

USTRUCT(BlueprintType)
struct FMorNewsFeedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleted;
    
    MORIA_API FMorNewsFeedEntry();
};

