#pragma once
#include "CoreMinimal.h"
#include "WatcherBehaviorState.h"
#include "BSt_Watcher_Scouting.generated.h"

class UAIPerceptionComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UBSt_Watcher_Scouting : public UWatcherBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
public:
    UBSt_Watcher_Scouting();

};

