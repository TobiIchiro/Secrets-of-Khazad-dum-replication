#include "VoxelLineTraceParameters.h"

FVoxelLineTraceParameters::FVoxelLineTraceParameters() {
    this->CollisionChannel = ECC_WorldStatic;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DrawTime = 0.00f;
}

