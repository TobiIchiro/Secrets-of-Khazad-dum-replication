#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_Interact.h"
#include "EMorAIBehaviorPointAlignmentType.h"
#include "MorBehaviorState_Interact.generated.h"

class UAnimMontage;
class UMorBehaviorState_InteractMontage;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Interact : public UFGKBehaviorState_Interact {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIBehaviorPointAlignmentType RotationAlignmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBehaviorState_InteractMontage* PlayMontageState;
    
public:
    UMorBehaviorState_Interact();

};

