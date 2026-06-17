#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelInstance.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class FGKUE5STUBS_API ALevelInstance : public AActor {
    GENERATED_BODY()
public:
    ALevelInstance(const FObjectInitializer& ObjectInitializer);

};

