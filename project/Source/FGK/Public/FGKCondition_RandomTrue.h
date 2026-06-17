#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "FGKCondition_RandomTrue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_RandomTrue : public UFGKCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
public:
    UFGKCondition_RandomTrue();

};

