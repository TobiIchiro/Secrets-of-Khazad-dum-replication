#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorDiscoveredConstruction.h"
#include "MorDiscoveredConstructionsArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredConstructionsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDiscoveredConstruction> Items;
    
public:
    MORIA_API FMorDiscoveredConstructionsArray();
};

