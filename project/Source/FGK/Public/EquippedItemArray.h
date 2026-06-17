#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EquippedItem.h"
#include "EquippedItemArray.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FEquippedItemArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedItem> Items;
    
public:
    FEquippedItemArray();
};

