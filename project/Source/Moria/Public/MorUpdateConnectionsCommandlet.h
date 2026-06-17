#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorUpdateConnectionsCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorUpdateConnectionsCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorUpdateConnectionsCommandlet();

};

