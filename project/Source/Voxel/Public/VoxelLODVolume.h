#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "VoxelLODVolume.generated.h"

class UVoxelVolumeInvokerComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelLODVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoxelVolumeInvokerComponent* InvokerComponent;
    
    AVoxelLODVolume(const FObjectInitializer& ObjectInitializer);

};

