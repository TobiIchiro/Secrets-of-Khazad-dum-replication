#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "FGKAnimNodeBlendSpacePlayer.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKAnimNodeBlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    FFGKAnimNodeBlendSpacePlayer();
};

