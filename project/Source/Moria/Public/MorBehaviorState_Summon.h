#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_Ability.h"
#include "MorBehaviorState_Summon.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Summon : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UMorBehaviorState_Summon();

};

