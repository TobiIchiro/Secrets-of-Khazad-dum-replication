#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKBehaviorState_MeleeAttack.h"
#include "FGKBehaviorState_ChargeAttack.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_ChargeAttack : public UFGKBehaviorState_MeleeAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseMeleeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKGait PreviousGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetProxy;
    
public:
    UFGKBehaviorState_ChargeAttack();

};

