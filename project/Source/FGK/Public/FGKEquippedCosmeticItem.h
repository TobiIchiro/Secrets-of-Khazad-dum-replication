#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EFGKCosmeticEquipSlot.h"
#include "FGKCosmeticItemEffect.h"
#include "Templates/SubclassOf.h"
#include "FGKEquippedCosmeticItem.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FGK_API FFGKEquippedCosmeticItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFGKCosmeticEquipSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKCosmeticItemEffect Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* ReplicatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* LocalActor;
    
    FFGKEquippedCosmeticItem();
};

