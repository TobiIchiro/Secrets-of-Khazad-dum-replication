#pragma once
#include "CoreMinimal.h"
#include "VoxelSimpleInvokerComponent.h"
#include "VoxelInvokerAutoCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelInvokerAutoCameraComponent : public UVoxelSimpleInvokerComponent {
    GENERATED_BODY()
public:
    UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer);

};

