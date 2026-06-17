#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StatsManagerActorData.h"
#include "StatsManagerActorDataArray.generated.h"

USTRUCT(BlueprintType)
struct FStatsManagerActorDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatsManagerActorData> Items;
    
    MORIA_API FStatsManagerActorDataArray();
};

