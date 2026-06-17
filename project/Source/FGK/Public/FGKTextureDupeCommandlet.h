#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "FGKTextureDupeCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class FGK_API UFGKTextureDupeCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UFGKTextureDupeCommandlet();

};

