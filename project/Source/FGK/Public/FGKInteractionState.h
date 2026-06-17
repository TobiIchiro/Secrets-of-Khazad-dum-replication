#pragma once
#include "CoreMinimal.h"
#include "FGKInteractionStateInterface.h"
#include "FGKState.h"
#include "FGKInteractionState.generated.h"

class UFGKInteractableComponent;
class UFGKSequencerState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKInteractionState : public UFGKState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
    UFGKInteractionState();

    UFUNCTION(BlueprintCallable)
    void SetInteractableComponent(UFGKInteractableComponent* InComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

