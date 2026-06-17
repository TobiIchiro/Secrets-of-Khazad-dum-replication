#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorAuditMeshesCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorAuditMeshesCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorAuditMeshesCommandlet();

};

