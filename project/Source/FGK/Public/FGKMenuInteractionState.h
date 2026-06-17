#pragma once
#include "CoreMinimal.h"
#include "FGKInteractionStateInterface.h"
#include "FGKWBPMenuState.h"
#include "FGKMenuInteractionState.generated.h"

class UFGKInteractableComponent;
class UFGKSequencerState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMenuInteractionState : public UFGKWBPMenuState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
    UFGKMenuInteractionState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

