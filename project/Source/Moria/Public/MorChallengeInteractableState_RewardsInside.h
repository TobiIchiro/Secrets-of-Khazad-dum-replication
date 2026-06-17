#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorChallengeInteractableState_RewardsInside.generated.h"

class AMorChallengeInteractable;
class UFGKFilteredInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorChallengeInteractableState_RewardsInside : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKFilteredInventoryComponent* ParentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorChallengeInteractable* ChallengeInteractable;
    
public:
    UMorChallengeInteractableState_RewardsInside();

};

