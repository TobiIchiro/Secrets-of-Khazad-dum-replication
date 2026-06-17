#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKActionEffectCleanupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKActionEffectCleanupCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKActionEffectCleanupCommandlet();

};

