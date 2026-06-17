#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_CanCollectItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanCollectItems : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StationBlackboardKeyName;
    
public:
    UMorAICondition_CanCollectItems();

};

