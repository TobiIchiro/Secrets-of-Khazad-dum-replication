#include "PowerIKGroundCollision.h"

FPowerIKGroundCollision::FPowerIKGroundCollision() {
    this->TraceComplex = false;
    this->RayCastUp = 0.00f;
    this->RayCastDown = 0.00f;
    this->EnableWallCollision = false;
    this->WallOffset = 0.00f;
}

