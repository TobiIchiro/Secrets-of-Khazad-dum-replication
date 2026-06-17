#pragma once
#include "CoreMinimal.h"
#include "WatcherCState.h"
#include "WatcherTentacleCState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleCState : public UWatcherCState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UWatcherTentacleCState();

};

