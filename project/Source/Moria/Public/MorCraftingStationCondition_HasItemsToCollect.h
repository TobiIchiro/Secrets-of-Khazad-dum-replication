#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCraftingStationCondition_HasItemsToCollect.generated.h"

class AMorCraftingStation;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationCondition_HasItemsToCollect : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCraftingStation* CraftingStation;
    
public:
    UMorCraftingStationCondition_HasItemsToCollect();

};

