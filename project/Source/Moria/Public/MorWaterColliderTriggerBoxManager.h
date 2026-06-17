#pragma once
#include "CoreMinimal.h"
#include "MorFXManager.h"
#include "MorWaterColliderTriggerBoxManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorWaterColliderTriggerBoxManager : public AMorFXManager {
    GENERATED_BODY()
public:
    AMorWaterColliderTriggerBoxManager(const FObjectInitializer& ObjectInitializer);

};

