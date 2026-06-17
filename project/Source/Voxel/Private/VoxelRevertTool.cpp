#include "VoxelRevertTool.h"

UVoxelRevertTool::UVoxelRevertTool() {
    this->ToolName = TEXT("Revert");
    this->bRevertValues = true;
    this->bRevertMaterials = false;
    this->HistoryPosition = 0;
    this->CurrentHistoryPosition = 0;
}


