#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKAIConditionBase.h"
#include "Templates/SubclassOf.h"
#include "FGKAICondition_HasActiveStimulus.generated.h"

class UAISense;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasActiveStimulus : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> SenseToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
public:
    UFGKAICondition_HasActiveStimulus();

};

