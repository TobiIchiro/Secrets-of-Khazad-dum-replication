#pragma once
#include "CoreMinimal.h"
#include "MorDecoVolumeProbeLayer.generated.h"

USTRUCT(BlueprintType)
struct FMorDecoVolumeProbeLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CatalogHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NearestWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NearestCliffOrWall;
    
    MORIA_API FMorDecoVolumeProbeLayer();
};

