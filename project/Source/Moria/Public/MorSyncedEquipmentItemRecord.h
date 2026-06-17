#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MorSyncedEquipmentItemRecord.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FMorSyncedEquipmentItemRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    MORIA_API FMorSyncedEquipmentItemRecord();
};

