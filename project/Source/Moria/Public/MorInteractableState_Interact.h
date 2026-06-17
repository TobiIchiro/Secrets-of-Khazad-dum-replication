#pragma once
#include "CoreMinimal.h"
#include "EInteractState.h"
#include "MorInteractableState.h"
#include "MorInteraction.h"
#include "MorInteractableState_Interact.generated.h"

class ACharacter;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_Interact : public UMorInteractableState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction GenericInteraction;
    
public:
    UMorInteractableState_Interact();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LocalInteract(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState GetState(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEnabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetDisabledText(const FText& TextFormat, const ACharacter* Interactor) const;
    
};

