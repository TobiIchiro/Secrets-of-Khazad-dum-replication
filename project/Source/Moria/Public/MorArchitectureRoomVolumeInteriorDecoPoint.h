#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorArchitectureRoomVolumeInteriorDecoPoint.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureRoomVolumeInteriorDecoPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachedBlockIndex;
    
    FMorArchitectureRoomVolumeInteriorDecoPoint();
};

