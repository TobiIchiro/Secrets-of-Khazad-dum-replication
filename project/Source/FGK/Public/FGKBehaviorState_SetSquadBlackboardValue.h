#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKBehaviorState_SetSquadBlackboardValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_SetSquadBlackboardValue : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SquadBlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IndividualBlackboardKeyName;
    
public:
    UFGKBehaviorState_SetSquadBlackboardValue();

};

