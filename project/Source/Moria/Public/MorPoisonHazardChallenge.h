#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorChallengeInstance.h"
#include "MorProxyActorInterface.h"
#include "MorPoisonHazardChallenge.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorPoisonHazardChallenge : public AActor, public IMorChallengeInstance, public IMorProxyActorInterface {
    GENERATED_BODY()
public:
    AMorPoisonHazardChallenge(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetChallengeCompleted();
    

    // Fix for true pure virtual functions not being implemented
};

