#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_InRangeOfRites.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_InRangeOfRites : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableDistance;
    
public:
    UMorAICondition_InRangeOfRites();

};

