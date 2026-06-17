#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKAssetCheckCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKAssetCheckCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKAssetCheckCommandlet();

};

