#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_MonumentBuildable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_MonumentBuildable : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_MonumentBehaviorPoint;
    
public:
    UMorAICondition_MonumentBuildable();

};

