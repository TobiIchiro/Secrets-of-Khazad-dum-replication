#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorAIPopulationRowHandle.h"
#include "MorLandmarkRowHandle.h"
#include "MorAIPopulationDistributionDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPopulationDistributionDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle OverrideLandmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIPopulationRowHandle Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredMinimumGroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredMaximumGroupSize;
    
    FMorAIPopulationDistributionDefinition();
};

