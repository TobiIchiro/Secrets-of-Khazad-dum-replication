#include "MergingMeshesParameters.h"

FMergingMeshesParameters::FMergingMeshesParameters() {
    this->bMergeEnabled = false;
    this->MergedMeshPhysicsAsset = NULL;
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bDestroyEmptyMeshesAfterMerge = false;
    this->bLinkAnimInstanceClasses = false;
}

