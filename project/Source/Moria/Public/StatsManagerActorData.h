#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StatsManagerDataEntry.h"
#include "StatsManagerActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStatsManagerActorData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatsManagerDataEntry> DataEntries;
    
    MORIA_API FStatsManagerActorData();
};

