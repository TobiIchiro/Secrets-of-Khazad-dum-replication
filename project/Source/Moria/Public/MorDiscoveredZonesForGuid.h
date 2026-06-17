#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "MorZoneRowHandle.h"
#include "MorDiscoveredZonesForGuid.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredZonesForGuid : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorDiscoveredZonesForGuid();
};

