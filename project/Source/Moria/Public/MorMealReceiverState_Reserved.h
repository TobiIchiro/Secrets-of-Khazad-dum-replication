#pragma once
#include "CoreMinimal.h"
#include "MorMealReceiverState.h"
#include "MorMealReceiverState_Reserved.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMealReceiverState_Reserved : public UMorMealReceiverState {
    GENERATED_BODY()
public:
    UMorMealReceiverState_Reserved();

private:
    UFUNCTION(BlueprintCallable)
    void OnHasFood();
    
    UFUNCTION(BlueprintCallable)
    void OnCraftCanceled();
    
};

