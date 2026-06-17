#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorCraftingStationState.generated.h"

class ACharacter;
class AMorCraftingStation;
class UMorCraftingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorCraftingStationState();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowCraftingScreen(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnCraftingScreenLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCraftingStation* GetCraftingStation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorCraftingComponent* GetCraftingComponent() const;
    
};

