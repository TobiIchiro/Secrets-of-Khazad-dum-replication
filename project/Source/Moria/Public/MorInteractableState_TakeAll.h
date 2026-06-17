#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorInteractableState_Interact.h"
#include "MorInteractableState_TakeAll.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_TakeAll : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SingleItemTypeTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MultipleItemTypesTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisabledReasonEmptyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisabledReasonCantMoveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DropConflictingItemsWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ParentInventory;
    
public:
    UMorInteractableState_TakeAll();

};

