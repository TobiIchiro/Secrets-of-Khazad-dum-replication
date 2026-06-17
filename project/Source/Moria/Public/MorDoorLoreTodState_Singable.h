#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState.h"
#include "MorDoorLoreTodState_Singable.generated.h"

class UMorDoorLoreTodLightComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDoorLoreTodState_Singable : public UMorInteractableState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorDoorLoreTodLightComponent* InteractableTodLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLightInMode;
    
public:
    UMorDoorLoreTodState_Singable();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReceivingLightUpdated(bool bReceiving);
    
};

