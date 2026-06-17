#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectNative.h"
#include "MorAIChallengeActor.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIChallengeActor : public AActor, public IMorSaveGameObjectNative, public IMorProxyActorInterface {
    GENERATED_BODY()
public:
    AMorAIChallengeActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

