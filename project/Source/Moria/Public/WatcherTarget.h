#pragma once
#include "CoreMinimal.h"
#include "EWatcherZone.h"
#include "WatcherTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWatcherTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherZone SourceZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    MORIA_API FWatcherTarget();
};

