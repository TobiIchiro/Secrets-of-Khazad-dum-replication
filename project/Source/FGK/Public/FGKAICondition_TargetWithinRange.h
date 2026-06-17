#pragma once
#include "CoreMinimal.h"
#include "EFGKDistanceType.h"
#include "ETargetRangeType.h"
#include "FGKAICondition_HasTargetByTeam.h"
#include "FGKAICondition_TargetWithinRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_TargetWithinRange : public UFGKAICondition_HasTargetByTeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetRangeType TargetRangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKDistanceType CustomDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomBoneName;
    
public:
    UFGKAICondition_TargetWithinRange();

};

