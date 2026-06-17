#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "MorBehaviorState_AttackRanged.h"
#include "MorBehaviorState_AttackRanged_Breakable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_AttackRanged_Breakable : public UMorBehaviorState_AttackRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackHandleKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    
public:
    UMorBehaviorState_AttackRanged_Breakable();

};

