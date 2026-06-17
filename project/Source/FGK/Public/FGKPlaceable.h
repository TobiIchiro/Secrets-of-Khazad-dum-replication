#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKPlaceable.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKPlaceable : public AActor {
    GENERATED_BODY()
public:
    AFGKPlaceable(const FObjectInitializer& ObjectInitializer);

};

