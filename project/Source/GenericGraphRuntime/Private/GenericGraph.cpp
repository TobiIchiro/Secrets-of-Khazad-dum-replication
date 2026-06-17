#include "GenericGraph.h"
#include "GenericGraphEdge.h"
#include "GenericGraphNode.h"

UGenericGraph::UGenericGraph() {
    this->NodeType = UGenericGraphNode::StaticClass();
    this->EdgeType = UGenericGraphEdge::StaticClass();
    this->bEdgeEnabled = true;
}

void UGenericGraph::Print(bool ToConsole, bool ToScreen) {
}

void UGenericGraph::GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes) {
}

int32 UGenericGraph::GetLevelNum() const {
    return 0;
}


