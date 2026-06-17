#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCraftingStationCondition_IsCrafting.generated.h"

class UMorCraftingComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingStationCondition_IsCrafting : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* CraftingComponent;
    
public:
    UMorCraftingStationCondition_IsCrafting();

};

