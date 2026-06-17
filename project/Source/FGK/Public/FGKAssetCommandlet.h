#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FGKAssetCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKAssetCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UFGKAssetCommandlet();

};

