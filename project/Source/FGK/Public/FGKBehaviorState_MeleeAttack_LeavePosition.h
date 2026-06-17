#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "FGKBehaviorState_MeleeAttack_LeavePosition.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MeleeAttack_LeavePosition : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Target;
    
public:
    UFGKBehaviorState_MeleeAttack_LeavePosition();

};

