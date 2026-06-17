#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorExpeditionModifierItem.h"
#include "MorDiscoveredExpeditionModifiersArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredExpeditionModifiersArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorExpeditionModifierItem> Items;
    
public:
    MORIA_API FMorDiscoveredExpeditionModifiersArray();
};

