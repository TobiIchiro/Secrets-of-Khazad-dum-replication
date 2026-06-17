#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorStartingEquipmentOverrideDefinition.generated.h"

class UInventoryLoadout;

USTRUCT(BlueprintType)
struct MORIA_API FMorStartingEquipmentOverrideDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInventoryLoadout> PlayerStartingLoadoutAsset;
    
    FMorStartingEquipmentOverrideDefinition();
};

