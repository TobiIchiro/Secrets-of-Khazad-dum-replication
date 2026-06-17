#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_ElapsedNpcCraftTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_ElapsedNpcCraftTime : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorAICondition_ElapsedNpcCraftTime();

};

