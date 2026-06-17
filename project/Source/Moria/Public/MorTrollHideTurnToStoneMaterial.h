#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MorTrollHideTurnToStoneMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct MORIA_API FMorTrollHideTurnToStoneMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StoneMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MeshCompRef;
    
    FMorTrollHideTurnToStoneMaterial();
};

