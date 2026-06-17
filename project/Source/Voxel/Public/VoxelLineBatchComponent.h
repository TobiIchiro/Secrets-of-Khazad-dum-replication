#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "VoxelLineBatchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelLineBatchComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalculateAccurateBounds;
    
    UVoxelLineBatchComponent(const FObjectInitializer& ObjectInitializer);

};

