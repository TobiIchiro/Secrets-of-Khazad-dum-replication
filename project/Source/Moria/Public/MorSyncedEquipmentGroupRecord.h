#pragma once
#include "CoreMinimal.h"
#include "MorSyncedEquipmentItemRecord.h"
#include "MorSyncedEquipmentGroupRecord.generated.h"

USTRUCT(BlueprintType)
struct FMorSyncedEquipmentGroupRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSyncedEquipmentItemRecord PrimaryItemRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSyncedEquipmentItemRecord SecondaryItemRecord;
    
    MORIA_API FMorSyncedEquipmentGroupRecord();
};

