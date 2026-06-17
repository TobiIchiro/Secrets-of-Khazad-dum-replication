#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "Templates/SubclassOf.h"
#include "FGKAICondition_HasStimulus.generated.h"

class UAISense;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasStimulus : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAISense>> AcceptableSenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAge;
    
public:
    UFGKAICondition_HasStimulus();

};

