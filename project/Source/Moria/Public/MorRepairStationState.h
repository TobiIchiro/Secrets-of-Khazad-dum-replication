#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorRepairStationState.generated.h"

class ACharacter;
class AMorRepairStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRepairStationState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorRepairStationState();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowRepairScreen(ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorRepairStation* GetRepairStation() const;
    
};

