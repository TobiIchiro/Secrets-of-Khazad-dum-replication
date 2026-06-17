#include "VoxelNode_IfWithDefaultToTrue.h"
#include "EVoxelNodeIfBranchToUseForRangeAnalysis.h"

UVoxelNode_IfWithDefaultToTrue::UVoxelNode_IfWithDefaultToTrue() {
    this->BranchToUseForRangeAnalysis = EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue;
}


