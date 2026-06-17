#pragma once
#include "CoreMinimal.h"
#include "WatcherBState.h"
#include "WatcherTentacleBehaviorMachine.generated.h"

class UWatcherTentacleBState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleBehaviorMachine : public UWatcherBState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherTentacleBState* RequestedTentacleState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UWatcherTentacleBehaviorMachine();

};

