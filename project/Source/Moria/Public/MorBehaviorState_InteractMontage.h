#pragma once
#include "CoreMinimal.h"
#include "EMorAIBehaviorPointAlignmentType.h"
#include "MorBehaviorState_Ability.h"
#include "MorBehaviorState_InteractMontage.generated.h"

class UAnimMontage;
class UFGKAIBehaviorPointComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_InteractMontage : public UMorBehaviorState_Ability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorAIBehaviorPointAlignmentType RotationAlignmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAIBehaviorPointComponent* BehaviorPoint;
    
    UMorBehaviorState_InteractMontage();

};

