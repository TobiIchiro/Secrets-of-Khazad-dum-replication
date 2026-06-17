#include "FGKCharacterAnimInstanceProxy.h"

FFGKCharacterAnimInstanceProxy::FFGKCharacterAnimInstanceProxy() {
    this->Character = NULL;
    this->AnimInstance = NULL;
    this->FlailRate = 0.00f;
    this->bUseCombatIdles = false;
    this->bLookTowardsCameraForward = false;
    this->bCullLeftArmFromFullbodyMontages = false;
    this->ComponentScaleX = 0.00f;
    this->HeadTrackingAlpha = 0.00f;
    this->HeadTrackingYawFactor = 0.00f;
    this->IKAlpha = 0.00f;
    this->bUsePowerIK = false;
    this->bUseDragonIK = false;
}

