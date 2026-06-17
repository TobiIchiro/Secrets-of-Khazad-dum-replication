#pragma once
#include "CoreMinimal.h"
#include "WatcherCState.h"
#include "WatcherBodyMachine.generated.h"

class UWatcherBodyCState;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWatcherBodyMachine : public UWatcherCState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWatcherBodyCState* RequestedBodyState;
    
public:
    UWatcherBodyMachine();

};

