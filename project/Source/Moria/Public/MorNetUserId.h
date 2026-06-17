#pragma once
#include "CoreMinimal.h"
#include "MorNetUserId.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNetUserId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FMorNetUserId();
};

