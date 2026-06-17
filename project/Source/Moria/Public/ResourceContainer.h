#pragma once
#include "CoreMinimal.h"
#include "MorResourceContainerRowHandle.h"
#include "MorResourceLocator.h"
#include "ResourceInstance.h"
#include "ResourceContainer.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FResourceContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorResourceLocator Locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorResourceContainerRowHandle ContainerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FResourceInstance> Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OreVeinTotalVolumeFixed;
    
    FResourceContainer();
};

