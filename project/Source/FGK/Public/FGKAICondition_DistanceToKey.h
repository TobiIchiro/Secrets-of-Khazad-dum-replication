#pragma once
#include "CoreMinimal.h"
#include "EFGKAIDistanceCheck.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_DistanceToKey.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_DistanceToKey : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIDistanceCheck DistanceCheckType;
    
public:
    UFGKAICondition_DistanceToKey();

};

