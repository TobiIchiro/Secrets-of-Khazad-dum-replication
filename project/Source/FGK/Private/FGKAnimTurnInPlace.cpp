#include "FGKAnimTurnInPlace.h"

FFGKAnimTurnInPlace::FFGKAnimTurnInPlace() {
    this->TurnCheckMinAngle = 0.00f;
    this->Turn180Threshold = 0.00f;
    this->AimYawRateLimit = 0.00f;
    this->ElapsedDelayTime = 0.00f;
    this->MinAngleDelay = 0.00f;
    this->MaxAngleDelay = 0.00f;
}

