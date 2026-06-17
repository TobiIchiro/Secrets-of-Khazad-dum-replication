#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_MeleeCombat.h"
#include "MorBehaviorState_MeleeCombat_Simple.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MeleeCombat_Simple : public UMorBehaviorState_MeleeCombat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTargetKeyName;
    
public:
    UMorBehaviorState_MeleeCombat_Simple();

};

