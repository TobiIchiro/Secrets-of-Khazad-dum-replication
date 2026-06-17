#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "VoxelWorldVolume.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API AVoxelWorldVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVolumeEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorOnlyVolume;
    
    AVoxelWorldVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseVolume(AVoxelWorld* VoxelWorld) const;
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAllVoxelVolumes();
    
};

