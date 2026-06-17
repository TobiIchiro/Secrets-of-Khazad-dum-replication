#pragma once
#include "CoreMinimal.h"
#include "MoriaGameplayAbilityTargetActor.h"
#include "MGATADirection.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMGATADirection : public AMoriaGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    AMGATADirection(const FObjectInitializer& ObjectInitializer);

};

