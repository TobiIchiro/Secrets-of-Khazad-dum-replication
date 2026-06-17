#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "VoxelInvokerSettings.h"
#include "VoxelInvokerComponentBase.generated.h"

class AVoxelWorld;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelInvokerComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvokerEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorOnlyInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForPriorities;
    
    UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseInvoker(AVoxelWorld* VoxelWorld) const;
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAllVoxelInvokers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLocalInvoker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIntVector GetInvokerVoxelPosition(AVoxelWorld* VoxelWorld) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVoxelInvokerSettings GetInvokerSettings(AVoxelWorld* VoxelWorld) const;
    
};

