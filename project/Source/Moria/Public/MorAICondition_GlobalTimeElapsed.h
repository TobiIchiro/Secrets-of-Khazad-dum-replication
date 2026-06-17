#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_GlobalTimeElapsed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_GlobalTimeElapsed : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UMorAICondition_GlobalTimeElapsed();

};

