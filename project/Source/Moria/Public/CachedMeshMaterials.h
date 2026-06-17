#pragma once
#include "CoreMinimal.h"
#include "CachedMeshMaterials.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FCachedMeshMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> ValidPlacementMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> InvalidPlacementMaterials;
    
    MORIA_API FCachedMeshMaterials();
};

