#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKStateCheckCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKStateCheckCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKStateCheckCommandlet();

};

