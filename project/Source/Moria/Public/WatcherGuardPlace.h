#pragma once
#include "CoreMinimal.h"
#include "WatcherGuardPlace.generated.h"

class AWatcherGuardPoint;
class AWatcherZoneCenter;

USTRUCT(BlueprintType)
struct FWatcherGuardPlace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWatcherGuardPoint* GuardPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWatcherZoneCenter* ZoneCenter;
    
    MORIA_API FWatcherGuardPlace();
};

