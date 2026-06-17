#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FGKLoadedMappableConfigPair.generated.h"

class UPlayerMappableInputConfig;

USTRUCT(BlueprintType)
struct FFGKLoadedMappableConfigPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerMappableInputConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    FGK_API FFGKLoadedMappableConfigPair();
};

