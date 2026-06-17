#pragma once
#include "CoreMinimal.h"
#include "WatcherCState.h"
#include "WatcherBodyCState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherBodyCState : public UWatcherCState {
    GENERATED_BODY()
public:
    UWatcherBodyCState();

};

