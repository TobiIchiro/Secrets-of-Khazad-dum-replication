#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMPriority.h"
#include "MorAnyItemRowHandle.h"
#include "MorResourceContainerRowHandle.h"
#include "MorResourceDefinition.generated.h"

class UMoriaMineralPropertyAsset;

USTRUCT(BlueprintType)
struct MORIA_API FMorResourceDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorResourceContainerRowHandle, EMPriority> ContainerPriorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoriaMineralPropertyAsset> OverrideOreMineral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrackable;
    
    FMorResourceDefinition();
};

