#pragma once
#include "CoreMinimal.h"
#include "LevelSequence.h"
#include "FGKLevelSequenceFSM.generated.h"

class UFGKSequencerState;

UCLASS(Blueprintable)
class FGK_API UFGKLevelSequenceFSM : public ULevelSequence {
    GENERATED_BODY()
public:
    UFGKLevelSequenceFSM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetState() const;
    
};

