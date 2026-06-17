#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_ApplyInventoryLoadout.generated.h"

class UInventoryLoadout;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_ApplyInventoryLoadout : public UFGKBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* InventoryLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearExistingInventory;
    
public:
    UMorBehaviorState_ApplyInventoryLoadout();

};

