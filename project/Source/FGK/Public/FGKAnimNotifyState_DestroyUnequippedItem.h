#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimNotifyState_DestroyUnequippedItem.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_DestroyUnequippedItem : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemType;
    
public:
    UFGKAnimNotifyState_DestroyUnequippedItem();

};

