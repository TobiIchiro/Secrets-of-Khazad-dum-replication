#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKCombatManager.generated.h"

UCLASS(Blueprintable, Transient)
class FGK_API AFGKCombatManager : public AActor {
    GENERATED_BODY()
public:
    AFGKCombatManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetDestroyed(AActor* DestroyedActor);
    
};

