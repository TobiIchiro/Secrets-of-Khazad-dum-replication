#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKMontageNotifyCleanupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKMontageNotifyCleanupCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKMontageNotifyCleanupCommandlet();

};

