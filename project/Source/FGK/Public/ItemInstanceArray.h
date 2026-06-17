#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ItemInstance.h"
#include "ItemInstanceArray.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FGK_API FItemInstanceArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> List;
    
public:
    FItemInstanceArray();
};

