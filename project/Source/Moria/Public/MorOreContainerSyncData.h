#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorOreContainerSyncData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MORIA_API FMorOreContainerSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OreMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 DecalRandomnessSync;
    
    FMorOreContainerSyncData();
};

