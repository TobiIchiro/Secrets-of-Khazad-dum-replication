#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorSettlementData.generated.h"

class AMorSettlementStone;

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMorSettlementStone> SettlementStone;
    
    FMorSettlementData();
};

