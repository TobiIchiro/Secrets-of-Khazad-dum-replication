#pragma once
#include "CoreMinimal.h"
#include "WatcherTentacleBState.h"
#include "BSt_WatcherTentacle_StandardAttackSlash.generated.h"

class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UBSt_WatcherTentacle_StandardAttackSlash : public UWatcherTentacleBState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
public:
    UBSt_WatcherTentacle_StandardAttackSlash();

};

