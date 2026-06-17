#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInteractState.h"
#include "MorAnyItemRowHandle.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "BPMoriaInteractable.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class MORIA_API ABPMoriaInteractable : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartingGameplayTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultInteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissingItemInteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle ItemRequiredToInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bItemMustBeHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorInteraction Interaction;
    
public:
    ABPMoriaInteractable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocalInteract(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteract(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText DoGetMissingItemInteractText(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText DoGetInteractText(const ACharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractState DoGetInteractState(const ACharacter* Interactor) const;
    
};

