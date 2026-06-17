#pragma once
#include "CoreMinimal.h"
#include "WatcherCState.h"
#include "WatcherTentacleMachines.generated.h"

class UWatcherTentacleMachine;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleMachines : public UWatcherCState {
    GENERATED_BODY()
public:
    UWatcherTentacleMachines();

    UFUNCTION(BlueprintCallable)
    UWatcherTentacleMachine* GetMachineByIndex(int32 TentacleIndex);
    
};

