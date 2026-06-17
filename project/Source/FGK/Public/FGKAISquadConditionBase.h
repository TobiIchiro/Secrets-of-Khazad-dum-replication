#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKAISquadConditionBase.generated.h"

class AFGKAISquad;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadConditionBase : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKAISquad* AISquad;
    
public:
    UFGKAISquadConditionBase();

};

