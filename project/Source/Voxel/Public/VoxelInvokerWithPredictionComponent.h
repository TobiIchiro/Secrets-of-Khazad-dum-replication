#pragma once
#include "CoreMinimal.h"
#include "VoxelSimpleInvokerComponent.h"
#include "VoxelInvokerWithPredictionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelInvokerWithPredictionComponent : public UVoxelSimpleInvokerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTime;
    
    UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer);

};

