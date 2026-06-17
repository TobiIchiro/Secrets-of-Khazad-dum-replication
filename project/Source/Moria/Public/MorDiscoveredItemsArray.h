#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorDiscoveredItem.h"
#include "MorDiscoveredItemsArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredItemsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDiscoveredItem> Items;
    
public:
    MORIA_API FMorDiscoveredItemsArray();
};

