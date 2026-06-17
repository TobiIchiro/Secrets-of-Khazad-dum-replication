#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorSettlementData.h"
#include "MorSettlementDataArray.generated.h"

class AMorSettlementManager;

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorSettlementData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AMorSettlementManager* LinkedSettlementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 LastHandledReplicationKey;
    
public:
    FMorSettlementDataArray();
};

