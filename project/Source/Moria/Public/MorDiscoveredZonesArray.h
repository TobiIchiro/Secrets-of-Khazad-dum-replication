#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorDiscoveredZonesForGuid.h"
#include "MorDiscoveredZonesArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredZonesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDiscoveredZonesForGuid> Items;
    
public:
    MORIA_API FMorDiscoveredZonesArray();
};

