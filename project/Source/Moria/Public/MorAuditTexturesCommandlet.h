#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorAuditTexturesCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorAuditTexturesCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorAuditTexturesCommandlet();

};

