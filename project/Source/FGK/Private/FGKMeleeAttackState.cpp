#include "FGKMeleeAttackState.h"

UFGKMeleeAttackState::UFGKMeleeAttackState() {
    this->MovementMoveOverride = MOVE_Walking;
    this->ConnectRange = 100.00f;
    this->bDisallowCloserThanConnectRange = true;
    this->ConnectOffsetY = 0.00f;
    this->VelocityAdjustSpeedLimit = 0.00f;
    this->RotationAdjustSpeedLimit = 0.00f;
    this->FaceAttackTargetTime = 0.20f;
    this->bFaceAttackTarget = true;
    this->bMaintainInitialSpeed = false;
    this->bMaintainFinalSpeed = false;
    this->bStartGravityCurveAtConnect = true;
    this->bOnlyOverrideGravityWhenTargeted = true;
    this->bEnterOnNextFrame = false;
    this->CurrentHitWindow = NULL;
    this->DangerInvokerComponent = NULL;
}


