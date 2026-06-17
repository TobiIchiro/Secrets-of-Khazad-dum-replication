#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorLandmarkRowHandle.h"
#include "MorZoneRowHandle.h"
#include "MorMapStoneDirectionDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMapStoneDirectionDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLandmarkRowHandle> TargetLandmarks;
    
    FMorMapStoneDirectionDefinition();
};

