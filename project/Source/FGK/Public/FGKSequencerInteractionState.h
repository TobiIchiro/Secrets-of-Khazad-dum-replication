#pragma once
#include "CoreMinimal.h"
#include "FGKInteractionStateInterface.h"
#include "FGKSequencerState.h"
#include "FGKSequencerInteractionState.generated.h"

class UFGKInteractableComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKSequencerInteractionState : public UFGKSequencerState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
    UFGKSequencerInteractionState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

