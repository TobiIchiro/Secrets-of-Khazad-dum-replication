#pragma once
#include "CoreMinimal.h"
#include "EMDifficulty.h"
#include "MorResourceContainerRowHandle.h"
#include "ContainerProxyProperties.generated.h"

USTRUCT(BlueprintType)
struct FContainerProxyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceContainerRowHandle ContainerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMDifficulty DifficultyOverride;
    
    MORIA_API FContainerProxyProperties();
};

