#pragma once
#include "CoreMinimal.h"
#include "MorChallengeInteractableCondition_Base.h"
#include "MorChallengeInteractableConditon_HasToBeManuallyActivated.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorChallengeInteractableConditon_HasToBeManuallyActivated : public UMorChallengeInteractableCondition_Base {
    GENERATED_BODY()
public:
    UMorChallengeInteractableConditon_HasToBeManuallyActivated();

};

