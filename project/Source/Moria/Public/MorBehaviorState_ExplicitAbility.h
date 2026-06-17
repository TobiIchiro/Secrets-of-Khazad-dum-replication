#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_Ability.h"
#include "Templates/SubclassOf.h"
#include "MorBehaviorState_ExplicitAbility.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_ExplicitAbility : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityToPerform;
    
public:
    UMorBehaviorState_ExplicitAbility();

};

