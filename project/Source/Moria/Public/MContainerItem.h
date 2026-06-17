#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MContainerItem.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct MORIA_API FMContainerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FMContainerItem();
};

