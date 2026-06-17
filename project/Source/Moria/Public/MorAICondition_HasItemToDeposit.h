#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "GameplayTagContainer.h"
#include "MorAICondition_HasItemToDeposit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasItemToDeposit : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
public:
    UMorAICondition_HasItemToDeposit();

};

