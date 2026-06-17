#pragma once
#include "CoreMinimal.h"
#include "BGMHistory.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBGMHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> PlayedIndex;
    
    FBGMHistory();
};

