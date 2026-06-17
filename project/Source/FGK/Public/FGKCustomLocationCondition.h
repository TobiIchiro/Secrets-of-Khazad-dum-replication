#pragma once
#include "CoreMinimal.h"
#include "EFGKDistanceType.h"
#include "FGKCustomLocationCondition.generated.h"

USTRUCT(BlueprintType)
struct FFGKCustomLocationCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKDistanceType DistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    FGK_API FFGKCustomLocationCondition();
};

