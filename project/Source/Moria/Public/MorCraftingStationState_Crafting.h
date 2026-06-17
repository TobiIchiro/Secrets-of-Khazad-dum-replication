#pragma once
#include "CoreMinimal.h"
#include "MorCraftingStationState.h"
#include "MorItemRecipeRowHandle.h"
#include "MorCraftingStationState_Crafting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationState_Crafting : public UMorCraftingStationState {
    GENERATED_BODY()
public:
    UMorCraftingStationState_Crafting();

private:
    UFUNCTION(BlueprintCallable)
    void OnRecipeFinished(const FMorItemRecipeRowHandle RecipeHandle, bool bAllCraftingFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnCraftingCanceled();
    
};

