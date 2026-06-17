#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVoxelHeightmapImporterMaterialConfig.h"
#include "VoxelLandscapeImporterLayerInfo.h"
#include "VoxelLandscapeImporter.generated.h"

class ALandscape;

UCLASS(Blueprintable)
class VOXEL_API AVoxelLandscapeImporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscape* Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelLandscapeImporterLayerInfo> LayerInfos;
    
    AVoxelLandscapeImporter(const FObjectInitializer& ObjectInitializer);

};

