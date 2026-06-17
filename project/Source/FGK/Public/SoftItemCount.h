#pragma once
#include "CoreMinimal.h"
#include "SoftItemCount.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FGK_API FSoftItemCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FSoftItemCount();
};

