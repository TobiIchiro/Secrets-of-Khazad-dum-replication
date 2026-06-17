#pragma once
#include "CoreMinimal.h"
#include "MorLoadingScreenConfigData.generated.h"

USTRUCT(BlueprintType)
struct FMorLoadingScreenConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJoiningClient;
    
    MORIA_API FMorLoadingScreenConfigData();
};

