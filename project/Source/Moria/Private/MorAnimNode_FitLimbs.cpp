#include "MorAnimNode_FitLimbs.h"

FMorAnimNode_FitLimbs::FMorAnimNode_FitLimbs() {
    this->Alpha = 0.00f;
    this->CollisionCheckStartDistance = 0.00f;
    this->CollisionCheckEndDistance = 0.00f;
    this->bPerformCollisionChecks = false;
    this->bTraceComplex = false;
    this->bEnableMeshRotation = false;
    this->CurveValueInterpolationTime = 0.00f;
    this->GroundPlaneInterpolationTime = 0.00f;
    this->Iterations = 0;
    this->CorrectionWeight = 0.00f;
    this->bDebugDraw = false;
}

