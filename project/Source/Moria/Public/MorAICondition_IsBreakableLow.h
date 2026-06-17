#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_IsBreakableLow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_IsBreakableLow : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebug;
    
public:
    UMorAICondition_IsBreakableLow();

};

