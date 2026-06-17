#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorUpdateZoneCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorUpdateZoneCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorUpdateZoneCommandlet();

};

