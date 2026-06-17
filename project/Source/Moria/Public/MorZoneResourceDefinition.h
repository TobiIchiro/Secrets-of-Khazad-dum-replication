#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMPriority.h"
#include "MorResourceRowHandle.h"
#include "MorZoneResourceDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneResourceDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorResourceRowHandle ResourceHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeanPerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StdDevPerContainer;
    
    FMorZoneResourceDefinition();
};

