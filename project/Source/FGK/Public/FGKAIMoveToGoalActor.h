#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKAIMoveToGoalActor.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKAIMoveToGoalActor : public AActor {
    GENERATED_BODY()
public:
    AFGKAIMoveToGoalActor(const FObjectInitializer& ObjectInitializer);

};

