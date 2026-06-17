#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKManager.generated.h"

UCLASS(Abstract, Blueprintable)
class FGK_API AFGKManager : public AActor {
    GENERATED_BODY()
public:
    AFGKManager(const FObjectInitializer& ObjectInitializer);

};

