#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorInventoryLoadoutDefinition.generated.h"

class UInventoryLoadout;

USTRUCT(BlueprintType)
struct MORIA_API FMorInventoryLoadoutDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* InventoryLoadout;
    
    FMorInventoryLoadoutDefinition();
};

