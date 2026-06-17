#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VoxelPhysicsRelevancyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelPhysicsRelevancyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxVoxelChunksLODForPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitBeforeActivating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UVoxelPhysicsRelevancyComponent(const FObjectInitializer& ObjectInitializer);

};

