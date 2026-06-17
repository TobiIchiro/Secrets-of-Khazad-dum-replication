#pragma once
#include "CoreMinimal.h"
#include "MorMealReceiverState.h"
#include "MorMealReceiverState_HasFood.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorMealReceiverState_HasFood : public UMorMealReceiverState {
    GENERATED_BODY()
public:
    UMorMealReceiverState_HasFood();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMealReceiverSpoiled();
    
    UFUNCTION(BlueprintCallable)
    void OnMealReceiverEmptied();
    
};

