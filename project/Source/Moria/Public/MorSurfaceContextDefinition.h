#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorSurfaceContextRequirement.h"
#include "MorSurfaceContextDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSurfaceContextDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSurfaceContextRequirement> ContextRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceInclineMinDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceInclineMaxDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WaterDepthRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaceOnWaterSurface;
    
    FMorSurfaceContextDefinition();
};

