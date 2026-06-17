#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelDataItemActor.generated.h"

class AVoxelWorld;

UCLASS(Abstract, Blueprintable)
class VOXEL_API AVoxelDataItemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticUpdates;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshDelay;
    
    AVoxelDataItemActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScheduleRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_AddItemToWorld(AVoxelWorld* World);
    
};

