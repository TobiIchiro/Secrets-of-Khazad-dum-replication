#pragma once
#include "CoreMinimal.h"
#include "ECraftFailureReason.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_CraftFailReason.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CraftFailReason : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECraftFailureReason FailReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FailReasonBlackboardKey;
    
public:
    UMorAICondition_CraftFailReason();

};

