#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifyQueue.h"
#include "FGKAnimNotifyQueue.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKAnimNotifyQueue : public FAnimNotifyQueue {
    GENERATED_BODY()
public:
    FFGKAnimNotifyQueue();
};

