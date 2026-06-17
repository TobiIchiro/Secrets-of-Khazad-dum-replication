#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorChallengeRowHandle.h"
#include "MorResourceRowHandle.h"
#include "MorToolRowHandle.h"
#include "MorChallengeResourceDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeResourceDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle ChallengeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceRowHandle ResourceHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorToolRowHandle> ToolsRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CountToDistribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeanPerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StdDevPerContainer;
    
    FMorChallengeResourceDefinition();
};

