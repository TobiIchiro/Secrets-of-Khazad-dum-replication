#pragma once
#include "CoreMinimal.h"
#include "FGKStateCheckCommandlet.h"
#include "FGKFindConditionCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKFindConditionCommandlet : public UFGKStateCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKFindConditionCommandlet();

};

