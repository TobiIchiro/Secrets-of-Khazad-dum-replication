#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_TakeMeal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_TakeMeal : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_BehaviorPoint;
    
public:
    UMorBehaviorState_TakeMeal();

};

