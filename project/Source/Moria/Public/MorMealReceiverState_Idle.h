#pragma once
#include "CoreMinimal.h"
#include "MorMealReceiverState.h"
#include "MorMealReceiverState_Idle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMealReceiverState_Idle : public UMorMealReceiverState {
    GENERATED_BODY()
public:
    UMorMealReceiverState_Idle();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipToHasFood();
    
    UFUNCTION(BlueprintCallable)
    void OnIdleFinished();
    
};

