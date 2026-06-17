#pragma once
#include "CoreMinimal.h"
#include "WatcherCState.h"
#include "WatcherTentacleMachine.generated.h"

class UWatcherTentacleCState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleMachine : public UWatcherCState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherTentacleCState* RequestedTentacleState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
    UWatcherTentacleMachine();

};

