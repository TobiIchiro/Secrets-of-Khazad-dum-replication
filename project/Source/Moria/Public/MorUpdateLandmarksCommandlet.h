#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorUpdateLandmarksCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorUpdateLandmarksCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorUpdateLandmarksCommandlet();

};

