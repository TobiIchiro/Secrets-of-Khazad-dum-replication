#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorConstructionRowHandle.h"
#include "MorDiscoveredConstruction.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredConstruction : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorDiscoveredConstruction();
};

