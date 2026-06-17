#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorSettlementNPCData.h"
#include "MorSettlementNPCDataArray.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSettlementNPCDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorSettlementNPCData> Items;
    
public:
    FMorSettlementNPCDataArray();
};

