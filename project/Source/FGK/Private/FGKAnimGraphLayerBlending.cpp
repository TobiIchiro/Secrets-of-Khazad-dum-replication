#include "FGKAnimGraphLayerBlending.h"

FFGKAnimGraphLayerBlending::FFGKAnimGraphLayerBlending() {
    this->OverlayOverrideState = 0;
    this->EnableAimOffset = 0.00f;
    this->BasePose_N = 0.00f;
    this->BasePose_CLF = 0.00f;
    this->Arm_L = 0.00f;
    this->Arm_L_Add = 0.00f;
    this->Arm_L_LS = 0.00f;
    this->Arm_L_MS = 0.00f;
    this->Arm_R = 0.00f;
    this->Arm_R_Add = 0.00f;
    this->Arm_R_LS = 0.00f;
    this->Arm_R_MS = 0.00f;
    this->Hand_L = 0.00f;
    this->Hand_R = 0.00f;
    this->Legs = 0.00f;
    this->Legs_Add = 0.00f;
    this->pelvis = 0.00f;
    this->Pelvis_Add = 0.00f;
    this->Spine = 0.00f;
    this->Spine_Add = 0.00f;
    this->Head = 0.00f;
    this->Head_Add = 0.00f;
    this->EnableHandIK_L = 0.00f;
    this->EnableHandIK_R = 0.00f;
}

