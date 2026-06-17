#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_StateTimeElapsed.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_StateTimeElapsed : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* StateContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UFGKCondition_StateTimeElapsed();

};

