#pragma once
#include "CoreMinimal.h"
#include "FGKConditionContainer.generated.h"

class UFGKCondition;

USTRUCT(BlueprintType)
struct FGK_API FFGKConditionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKCondition* Condition;
    
    FFGKConditionContainer();
};

