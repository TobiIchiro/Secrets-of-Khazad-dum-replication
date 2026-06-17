#pragma once
#include "CoreMinimal.h"
#include "FGKInputState.h"
#include "FGKInteractionStateInterface.h"
#include "FGKInputInteractionState.generated.h"

class UFGKInteractableComponent;
class UFGKSequencerState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKInputInteractionState : public UFGKInputState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
    UFGKInputInteractionState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

