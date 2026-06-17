#pragma once
#include "CoreMinimal.h"
#include "WatcherBState.h"
#include "WatcherTentacleBState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleBState : public UWatcherBState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UWatcherTentacleBState();

};

