#pragma once
#include "CoreMinimal.h"
#include "MorGameplayAbility_MeleeAttack.h"
#include "MorGameplayAbility_BashAttack.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_BashAttack : public UMorGameplayAbility_MeleeAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReturningToBlockWhenItemDoesNotMatch;
    
public:
    UMorGameplayAbility_BashAttack();

};

