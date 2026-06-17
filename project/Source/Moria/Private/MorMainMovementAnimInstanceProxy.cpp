#include "MorMainMovementAnimInstanceProxy.h"

FMorMainMovementAnimInstanceProxy::FMorMainMovementAnimInstanceProxy() {
    this->Character = NULL;
    this->AnimInstance = NULL;
    this->MovementComponent = NULL;
    this->bOnRope = false;
    this->ClimbingSpeed = 0.00f;
}

