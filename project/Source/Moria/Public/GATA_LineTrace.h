#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_SingleLineTrace.h"
#include "GATA_LineTrace.generated.h"

UCLASS(Blueprintable)
class MORIA_API AGATA_LineTrace : public AGameplayAbilityTargetActor_SingleLineTrace {
    GENERATED_BODY()
public:
    AGATA_LineTrace(const FObjectInitializer& ObjectInitializer);

};

