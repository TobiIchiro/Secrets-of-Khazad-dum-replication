#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorLightReflectorState.generated.h"

class ACharacter;
class AMorGameplayLightReflector;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorLightReflectorState : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
    UMorLightReflectorState();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowUi(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorGameplayLightReflector* GetReflector() const;
    
};

