#pragma once
#include "CoreMinimal.h"
#include "EVoxelNoiseFractalType.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_NoiseNodeFractal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FractalOctaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractalLacunarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FractalGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelNoiseFractalType FractalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint8> LODToOctavesMap;
    
    UVoxelNode_NoiseNodeFractal();

};

