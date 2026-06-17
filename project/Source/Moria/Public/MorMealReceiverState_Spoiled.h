#pragma once
#include "CoreMinimal.h"
#include "MorMealReceiverState.h"
#include "MorMealReceiverState_Spoiled.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMealReceiverState_Spoiled : public UMorMealReceiverState {
    GENERATED_BODY()
public:
    UMorMealReceiverState_Spoiled();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMealReceiverEmptied();
    
};

