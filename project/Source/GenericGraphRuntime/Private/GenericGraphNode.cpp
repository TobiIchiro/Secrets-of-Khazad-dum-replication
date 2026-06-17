#include "GenericGraphNode.h"

UGenericGraphNode::UGenericGraphNode() {
    this->Graph = NULL;
}

bool UGenericGraphNode::IsLeafNode() const {
    return false;
}

UGenericGraph* UGenericGraphNode::GetGraph() const {
    return NULL;
}

UGenericGraphEdge* UGenericGraphNode::GetEdge(UGenericGraphNode* ChildNode) {
    return NULL;
}

FText UGenericGraphNode::GetDescription_Implementation() const {
    return FText::GetEmpty();
}


