#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "MorInteractionWidget.h"
#include "MorTakeItemWidget.generated.h"

class UMorInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorTakeItemWidget : public UMorInteractionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* ReceptacleInventory;
    
public:
    UMorTakeItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemsChanged(const FItemHandle& Item);
    
};

