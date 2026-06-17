#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorAnyItemRowHandle.h"
#include "MorDiscoveredItem.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorDiscoveredItem();
};

