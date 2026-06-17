#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "GameplayAbilitySpecHandle.h"
#include "MorBehaviorState_Ability.generated.h"

class UAbilitySystemComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Ability : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle SpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UMorBehaviorState_Ability();

};

