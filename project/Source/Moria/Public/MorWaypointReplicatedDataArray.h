#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorWaypointReplicatedData.h"
#include "MorWaypointReplicatedDataArray.generated.h"

class AMorWaypointsManager;

USTRUCT(BlueprintType)
struct FMorWaypointReplicatedDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorWaypointReplicatedData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorWaypointsManager* WaypointsManager;
    
    MORIA_API FMorWaypointReplicatedDataArray();
};

