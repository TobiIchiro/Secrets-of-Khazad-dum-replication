#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorProgressRowHandle.h"
#include "MorProgressItem.generated.h"

USTRUCT(BlueprintType)
struct FMorProgressItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorProgressItem();
};

