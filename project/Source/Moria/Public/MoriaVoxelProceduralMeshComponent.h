#pragma once
#include "CoreMinimal.h"
#include "VoxelProceduralMeshComponent.h"
#include "MoriaVoxelProceduralMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMoriaVoxelProceduralMeshComponent : public UVoxelProceduralMeshComponent {
    GENERATED_BODY()
public:
    UMoriaVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);

};

