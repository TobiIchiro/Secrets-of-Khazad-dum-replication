#pragma once
#include "CoreMinimal.h"
#include "MorWaypointReplicatedPlayerState.generated.h"

USTRUCT(BlueprintType)
struct FMorWaypointReplicatedPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EditedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HiddenForPlayersInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HiddenForPlayersInMinimap;
    
    MORIA_API FMorWaypointReplicatedPlayerState();
};

