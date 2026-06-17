#include "VoxelNode_IfWithDefaultToFalse.h"
#include "EVoxelNodeIfBranchToUseForRangeAnalysis.h"

UVoxelNode_IfWithDefaultToFalse::UVoxelNode_IfWithDefaultToFalse() {
    this->BranchToUseForRangeAnalysis = EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse;
}


