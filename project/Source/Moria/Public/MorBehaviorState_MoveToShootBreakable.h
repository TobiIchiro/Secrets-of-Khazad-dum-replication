#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "MorBehaviorState_MoveToShootBreakable.generated.h"

class UMorGameplayAbility_RangedAttack;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MoveToShootBreakable : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackHandleKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameplayAbility_RangedAttack* RangedAttack;
    
public:
    UMorBehaviorState_MoveToShootBreakable();

};

