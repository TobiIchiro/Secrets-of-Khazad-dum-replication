#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "MorCraftingStationState.h"
#include "MorCraftingStationState_Empty.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationState_Empty : public UMorCraftingStationState {
    GENERATED_BODY()
public:
    UMorCraftingStationState_Empty();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReadyToCollect(const FItemCount& AddedItem);
    
};

