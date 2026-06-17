#pragma once
#include "CoreMinimal.h"
#include "TagRequestRecord.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FTagRequestRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> Requesters;
    
    FGK_API FTagRequestRecord();
};

