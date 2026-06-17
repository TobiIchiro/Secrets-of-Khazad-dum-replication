#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState.h"
#include "MorChallengeInteractableState_WaitForSetup.generated.h"

class AMorChallengeInteractable;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorChallengeInteractableState_WaitForSetup : public UMorInteractableState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChallengeInteractable* ChallengeInteractable;
    
public:
    UMorChallengeInteractableState_WaitForSetup();

};

