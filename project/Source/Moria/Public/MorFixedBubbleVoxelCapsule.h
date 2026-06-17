#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorFixedBubbleVoxelCapsule.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFixedBubbleVoxelCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PackedA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PackedB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PackedRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MineralIndex;
    
    FMorFixedBubbleVoxelCapsule();
};

