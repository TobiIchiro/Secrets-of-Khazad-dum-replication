#pragma once
#include "CoreMinimal.h"
#include "FGKFaceBodyMontageState.h"
#include "FGKInteractionStateInterface.h"
#include "FGKMontageInteractionState.generated.h"

class UAnimMontage;
class UFGKInteractableComponent;
class UFGKSequencerState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMontageInteractionState : public UFGKFaceBodyMontageState, public IFGKInteractionStateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FaceMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndSequencerOnMontageFinish;
    
public:
    UFGKMontageInteractionState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetParentSequencerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKInteractableComponent* GetInteractableComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

