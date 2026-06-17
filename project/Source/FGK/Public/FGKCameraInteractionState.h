#pragma once
#include "CoreMinimal.h"
#include "FGKCineCameraState.h"
#include "FGKInteractionStateInterface.h"
#include "FGKCameraInteractionState.generated.h"

class UFGKInteractableComponent;
class UFGKSequencerState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCameraInteractionState : public UFGKCineCameraState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerCamera;
    
public:
    UFGKCameraInteractionState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

