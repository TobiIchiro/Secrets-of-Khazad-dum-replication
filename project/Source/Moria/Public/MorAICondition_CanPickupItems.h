#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_CanPickupItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_CanPickupItems : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupBlackboardKeyName;
    
public:
    UMorAICondition_CanPickupItems();

};

