#pragma once
#include "CoreMinimal.h"
#include "FGKStateCheckCommandlet.h"
#include "FGKRequestConditionCleanupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKRequestConditionCleanupCommandlet : public UFGKStateCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKRequestConditionCleanupCommandlet();

};

