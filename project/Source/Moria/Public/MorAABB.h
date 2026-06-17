#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorAABB.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAABB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Max;
    
    FMorAABB();
};

