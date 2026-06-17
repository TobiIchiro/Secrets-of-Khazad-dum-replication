#pragma once
#include "CoreMinimal.h"
#include "MorResourceRowHandle.h"
#include "MorZoneResourceLootPassResource.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneResourceLootPassResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceRowHandle ResourceHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeanPerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StdDevPerContainer;
    
    FMorZoneResourceLootPassResource();
};

