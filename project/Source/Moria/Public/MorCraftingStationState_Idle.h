#pragma once
#include "CoreMinimal.h"
#include "MorCraftingStationState.h"
#include "MorItemRecipeRowHandle.h"
#include "MorCraftingStationState_Idle.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationState_Idle : public UMorCraftingStationState {
    GENERATED_BODY()
public:
    UMorCraftingStationState_Idle();

private:
    UFUNCTION(BlueprintCallable)
    void OnCraftingStarted(const FMorItemRecipeRowHandle RecipeHandle);
    
};

