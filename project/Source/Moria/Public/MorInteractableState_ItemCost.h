#pragma once
#include "CoreMinimal.h"
#include "EInventoryQuery.h"
#include "MorInteractableState_Interact.h"
#include "MorInteractableState_ItemCost.generated.h"

class ACharacter;
class AMorChallengeInteractable;
class UFGKFilteredInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_ItemCost : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryQuery ItemSourceQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKFilteredInventoryComponent* ParentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChallengeInteractable* ChallengeInteractable;
    
public:
    UMorInteractableState_ItemCost();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnpaidInteraction(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartialCostPaid(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFullCostPaid(ACharacter* Interactor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredTools(const ACharacter* Interactor) const;
    
};

