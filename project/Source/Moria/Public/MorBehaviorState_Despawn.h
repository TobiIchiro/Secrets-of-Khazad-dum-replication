#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_Ability.h"
#include "Templates/SubclassOf.h"
#include "MorBehaviorState_Despawn.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Despawn : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Abilities;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveToSingleSpawner;
    
public:
    UMorBehaviorState_Despawn();

};

