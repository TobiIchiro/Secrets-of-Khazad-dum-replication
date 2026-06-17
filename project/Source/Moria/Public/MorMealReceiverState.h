#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorMealReceiverState.generated.h"

class AMorCraftReceiver;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorMealReceiverState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorMealReceiverState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCraftReceiver* GetCraftReceiver() const;
    
};

