#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorResourceContainerRowHandle.h"
#include "MorZoneResourceLootPassResource.h"
#include "MorZoneRowHandle.h"
#include "MorZoneResourceLootPassDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneResourceLootPassDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultForUnassignedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedForExpeditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> ApplicableZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorResourceContainerRowHandle> ApplicableContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneResourceLootPassResource> ResourcesToDistribute;
    
    FMorZoneResourceLootPassDefinition();
};

