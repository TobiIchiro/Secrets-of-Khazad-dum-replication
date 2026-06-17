#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "FGKMeleeAttackRow.h"
#include "FGKBehaviorState_MeleeAttack_Action.generated.h"

class AFGKBaseCharacter;
class UFGKMeleeAttackState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MeleeAttack_Action : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKMeleeAttackState* CurrentAttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMeleeAttackRow Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAttackWasStarted: 1;
    
public:
    UFGKBehaviorState_MeleeAttack_Action();

};

