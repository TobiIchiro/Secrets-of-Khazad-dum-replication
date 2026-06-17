#pragma once
#include "CoreMinimal.h"
#include "WatcherBehaviorState.h"
#include "BSt_Watcher_TentacleAttack.generated.h"

class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UBSt_Watcher_TentacleAttack : public UWatcherBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
public:
    UBSt_Watcher_TentacleAttack();

};

