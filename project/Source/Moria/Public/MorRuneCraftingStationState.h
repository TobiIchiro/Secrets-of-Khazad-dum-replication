#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorRuneCraftingStationState.generated.h"

class ACharacter;
class AMorRuneCraftingStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRuneCraftingStationState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorRuneCraftingStationState();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowRuneCraftingScreen(ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorRuneCraftingStation* GetRuneCraftingStation() const;
    
};

