#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorWaterColliderBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FMorWaterColliderBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPosition;
    
    MORIA_API FMorWaterColliderBoneInfo();
};

