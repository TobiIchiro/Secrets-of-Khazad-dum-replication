#pragma once
#include "CoreMinimal.h"
#include "MorResourceContainerRowHandle.h"
#include "MorZoneStagingContainer.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneStagingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceContainerRowHandle ResourceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContainersPerCell;
    
    FMorZoneStagingContainer();
};

