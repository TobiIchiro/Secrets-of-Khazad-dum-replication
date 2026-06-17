#pragma once
#include "CoreMinimal.h"
#include "ProcVoxelRegion.h"
#include "ProcVoxelRegionMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AProcVoxelRegionMesh : public AProcVoxelRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AProcVoxelRegionMesh(const FObjectInitializer& ObjectInitializer);

};

