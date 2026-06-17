#include "MoriaVoxelProceduralMeshComponent.h"
#include "Components/PrimitiveComponent.h"

UMoriaVoxelProceduralMeshComponent::UMoriaVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRenderCustomDepth = true;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_8;
}


