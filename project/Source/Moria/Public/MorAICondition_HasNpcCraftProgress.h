#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_HasNpcCraftProgress.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasNpcCraftProgress : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorAICondition_HasNpcCraftProgress();

};

