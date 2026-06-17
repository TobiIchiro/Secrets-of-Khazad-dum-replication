#pragma once
#include "CoreMinimal.h"
#include "ENumberCompareType.h"
#include "EVelocityThreshold.h"
#include "EVelocityThresholdType.h"
#include "FGKCondition_CharacterBase.h"
#include "FGKCondition_VelocityThreshold.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFGKCondition_VelocityThreshold : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumberCompareType CompareType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVelocityThreshold VelocityThresholdType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVelocityThresholdType ThresholdType;
    
public:
    UFGKCondition_VelocityThreshold();

};

