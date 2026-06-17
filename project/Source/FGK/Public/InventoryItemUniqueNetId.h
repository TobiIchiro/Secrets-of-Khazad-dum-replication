#pragma once
#include "CoreMinimal.h"
#include "FGKUniqueNetId.h"
#include "InventoryItemUniqueNetId.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FInventoryItemUniqueNetId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKUniqueNetId EquipComponentNetId;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    FInventoryItemUniqueNetId();
};

