#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorAICondition_MonumentHasAvailableBuildSpots.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAICondition_MonumentHasAvailableBuildSpots : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_MonumentBehaviorPoint;
    
public:
    UMorAICondition_MonumentHasAvailableBuildSpots();

};

