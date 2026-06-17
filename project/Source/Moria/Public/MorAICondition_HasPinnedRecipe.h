#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_HasPinnedRecipe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_HasPinnedRecipe : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StationBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckNpcOrder;
    
public:
    UMorAICondition_HasPinnedRecipe();

};

