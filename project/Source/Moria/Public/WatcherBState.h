#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "WatcherBState.generated.h"

class AWatcherCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWatcherBState : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
public:
    UWatcherBState();

};

