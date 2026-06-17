#pragma once
#include "CoreMinimal.h"
#include "LevelInstance.h"
#include "FGKParentedLevelInstance.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKParentedLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    AFGKParentedLevelInstance(const FObjectInitializer& ObjectInitializer);

};

