#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKMeleeCleanupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKMeleeCleanupCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKMeleeCleanupCommandlet();

};

