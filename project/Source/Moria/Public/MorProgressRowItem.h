#pragma once
#include "CoreMinimal.h"
#include "MorProgressRowHandle.h"
#include "MorProgressRowItem.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorProgressRowItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressValue;
    
    FMorProgressRowItem();
};

