#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Templates/SubclassOf.h"
#include "ItemCount.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FGK_API FItemCount : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FItemCount();
};

