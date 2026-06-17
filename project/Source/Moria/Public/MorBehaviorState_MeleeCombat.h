#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_MeleeCombat.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MeleeCombat : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChosenAttackKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetBreakable;
    
public:
    UMorBehaviorState_MeleeCombat();

};

