#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_Ability.h"
#include "MorBehaviorState_AttackRanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_AttackRanged : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetBreakable;
    
public:
    UMorBehaviorState_AttackRanged();

};

