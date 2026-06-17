#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState.h"
#include "MorFarmingState.generated.h"

class AMorFarmingReceptacle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorFarmingState : public UMorInteractableState {
    GENERATED_BODY()
public:
    UMorFarmingState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorFarmingReceptacle* GetFarmingReceptacle() const;
    
};

