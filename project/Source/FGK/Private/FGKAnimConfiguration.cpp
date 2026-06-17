#include "FGKAnimConfiguration.h"

FFGKAnimConfiguration::FFGKAnimConfiguration() {
    this->AnimatedWalkSpeed = 0.00f;
    this->AnimatedRunSpeed = 0.00f;
    this->AnimatedSprintSpeed = 0.00f;
    this->AnimatedCrouchSpeed = 0.00f;
    this->VelocityBlendInterpSpeed = 0.00f;
    this->GroundedLeanInterpSpeed = 0.00f;
    this->InAirLeanInterpSpeed = 0.00f;
    this->SmoothedAimingRotationInterpSpeed = 0.00f;
    this->InputYawOffsetInterpSpeed = 0.00f;
    this->TriggerPivotSpeedLimit = 0.00f;
    this->FootHeight = 0.00f;
    this->FootprintContactTolerance = 0.00f;
    this->DynamicTransitionThreshold = 0.00f;
    this->IK_TraceDistanceAboveFoot = 0.00f;
    this->IK_TraceDistanceBelowFoot = 0.00f;
}

