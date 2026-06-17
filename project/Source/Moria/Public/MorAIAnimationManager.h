#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorAIAnimationManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIAnimationManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    AMorAIAnimationManager(const FObjectInitializer& ObjectInitializer);

};

