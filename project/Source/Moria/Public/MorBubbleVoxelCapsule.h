#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorBubbleVoxelCapsule.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBubbleVoxelCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MineralIndex;
    
    FMorBubbleVoxelCapsule();
};

