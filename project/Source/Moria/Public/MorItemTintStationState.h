#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorItemTintStationState.generated.h"

class ACharacter;
class AMorItemTintStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorItemTintStationState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorItemTintStationState();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowItemTintScreen(ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorItemTintStation* GetItemTintStation() const;
    
};

