#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FGKCosmeticItemEffect.h"
#include "Templates/SubclassOf.h"
#include "FGKGameSavedEquippedCosmeticItem.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FGK_API FFGKGameSavedEquippedCosmeticItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKCosmeticItemEffect Effect;
    
    FFGKGameSavedEquippedCosmeticItem();
};

