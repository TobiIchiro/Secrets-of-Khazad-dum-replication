#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKNatAnimBoneLocalPoint.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKNatAnimBoneLocalPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalPoint;
    
    FFGKNatAnimBoneLocalPoint();
};

