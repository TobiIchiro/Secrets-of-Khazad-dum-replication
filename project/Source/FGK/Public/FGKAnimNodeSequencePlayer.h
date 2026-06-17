#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "FGKAnimNodeSequencePlayer.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKAnimNodeSequencePlayer : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    FFGKAnimNodeSequencePlayer();
};

