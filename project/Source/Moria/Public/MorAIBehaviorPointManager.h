#pragma once
#include "CoreMinimal.h"
#include "FGKAIBehaviorPointManager.h"
#include "MorAIBehaviorPointManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIBehaviorPointManager : public AFGKAIBehaviorPointManager {
    GENERATED_BODY()
public:
    AMorAIBehaviorPointManager(const FObjectInitializer& ObjectInitializer);

};

