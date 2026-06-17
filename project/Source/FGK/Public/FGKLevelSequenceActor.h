#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "FGKLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AFGKLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

