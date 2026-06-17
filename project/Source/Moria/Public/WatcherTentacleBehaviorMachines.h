#pragma once
#include "CoreMinimal.h"
#include "WatcherBState.h"
#include "WatcherTentacleBehaviorMachines.generated.h"

class UWatcherTentacleBehaviorMachine;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherTentacleBehaviorMachines : public UWatcherBState {
    GENERATED_BODY()
public:
    UWatcherTentacleBehaviorMachines();

    UFUNCTION(BlueprintCallable)
    UWatcherTentacleBehaviorMachine* GetMachineByIndex(int32 TentacleIndex);
    
};

