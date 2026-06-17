#pragma once
#include "CoreMinimal.h"
#include "EFGKDistanceType.h"
#include "FGKCondition_TargetBase.h"
#include "FGKCondition_TargetWithinRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_TargetWithinRange : public UFGKCondition_TargetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKDistanceType DistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UFGKCondition_TargetWithinRange();

};

