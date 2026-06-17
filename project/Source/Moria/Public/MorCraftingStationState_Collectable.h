#pragma once
#include "CoreMinimal.h"
#include "MorCraftingStationState.h"
#include "MorCraftingStationState_Collectable.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationState_Collectable : public UMorCraftingStationState {
    GENERATED_BODY()
public:
    UMorCraftingStationState_Collectable();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCraftingStationEmptied();
    
};

