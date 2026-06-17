#pragma once
#include "CoreMinimal.h"
#include "MorWaypointReplicatedFlags.generated.h"

USTRUCT(BlueprintType)
struct FMorWaypointReplicatedFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAtAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnderSiege;
    
    MORIA_API FMorWaypointReplicatedFlags();
};

