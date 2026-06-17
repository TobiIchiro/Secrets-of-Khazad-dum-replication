#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "MorBehaviorState_MoveToBreakable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MoveToBreakable : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackHandleKeyName;
    
public:
    UMorBehaviorState_MoveToBreakable();

};

