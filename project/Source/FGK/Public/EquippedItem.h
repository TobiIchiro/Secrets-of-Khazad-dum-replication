#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EEquipMode.h"
#include "EModularCharacterSlot.h"
#include "FGKNetFName.h"
#include "InventoryItemUniqueNetId.h"
#include "ItemHandle.h"
#include "EquippedItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGK_API FEquippedItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FItemHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKNetFName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModularCharacterSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EEquipMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInventoryItemUniqueNetId ItemNetId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
public:
    FEquippedItem();
};

