#pragma once
#include "CoreMinimal.h"
#include "MorInteractableConditionBase.h"
#include "MorChallengeInteractableCondition_Base.generated.h"

class AMorChallengeInteractable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorChallengeInteractableCondition_Base : public UMorInteractableConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChallengeInteractable* ChallengeInteractable;
    
public:
    UMorChallengeInteractableCondition_Base();

};

