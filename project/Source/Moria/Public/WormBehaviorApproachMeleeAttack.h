#pragma once
#include "CoreMinimal.h"
#include "WormBehaviorState.h"
#include "WormBehaviorApproachMeleeAttack.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorApproachMeleeAttack : public UWormBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToTeleport;
    
public:
    UWormBehaviorApproachMeleeAttack();

};

