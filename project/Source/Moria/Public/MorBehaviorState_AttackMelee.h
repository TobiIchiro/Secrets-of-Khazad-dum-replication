#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_Ability.h"
#include "MorBehaviorState_AttackMelee.generated.h"

class AActor;
class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_AttackMelee : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackHandleKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAttackSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetBreakable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UMorBehaviorState_AttackMelee();

};

