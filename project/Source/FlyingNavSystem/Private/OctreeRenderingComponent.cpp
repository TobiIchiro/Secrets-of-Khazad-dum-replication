#include "OctreeRenderingComponent.h"

UOctreeRenderingComponent::UOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bSelectable = false;
    this->CastShadow = false;
    this->OverrideMaterials.AddDefaulted(1);
}


