#pragma once
#include "CoreMinimal.h"
#include "FGKCombatManager.h"
#include "MorAICombatManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API AMorAICombatManager : public AFGKCombatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> BreakablesBeingTargeted;
    
public:
    AMorAICombatManager(const FObjectInitializer& ObjectInitializer);

};

