#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelPlaceableItemActor.generated.h"

class AVoxelWorld;

UCLASS(Abstract, Blueprintable)
class VOXEL_API AVoxelPlaceableItemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVoxelWorld* PreviewWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyImportIntoPreviewWorld;
    
    AVoxelPlaceableItemActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 K2_GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_AddItemToWorld(AVoxelWorld* World);
    
};

