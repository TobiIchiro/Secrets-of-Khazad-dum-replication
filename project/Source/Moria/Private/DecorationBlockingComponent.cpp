#include "DecorationBlockingComponent.h"

UDecorationBlockingComponent::UDecorationBlockingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->BlockingType = EBlockingType::Decoration;
    this->bRemovesBlocks = false;
}


