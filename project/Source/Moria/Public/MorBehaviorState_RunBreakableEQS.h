#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_RunEQS.h"
#include "MorBehaviorState_RunBreakableEQS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_RunBreakableEQS : public UFGKBehaviorState_RunEQS {
    GENERATED_BODY()
public:
    UMorBehaviorState_RunBreakableEQS();

};

