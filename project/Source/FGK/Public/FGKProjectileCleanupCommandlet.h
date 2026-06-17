#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKProjectileCleanupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKProjectileCleanupCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKProjectileCleanupCommandlet();

};

