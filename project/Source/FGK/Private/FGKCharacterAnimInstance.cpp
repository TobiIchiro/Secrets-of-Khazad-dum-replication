#include "FGKCharacterAnimInstance.h"

UFGKCharacterAnimInstance::UFGKCharacterAnimInstance() {
    this->Character = NULL;
    this->TrackedHipsDirection = EFGKHipsDirection::F;
    this->OverlayOverrideState = 0;
    this->bAllowPivot = false;
    this->CurveName_BasePose_CLF = TEXT("BasePose_CLF");
    this->CurveName_BasePose_N = TEXT("BasePose_N");
    this->CurveName_Enable_Transition = TEXT("Enable_Transition");
    this->CurveName_Enable_FootIK_L = TEXT("Enable_FootIK_L");
    this->CurveName_Enable_FootIK_R = TEXT("Enable_FootIK_R");
    this->CurveName_Enable_HandIK_L = TEXT("Enable_HandIK_L");
    this->CurveName_Enable_HandIK_R = TEXT("Enable_HandIK_R");
    this->CurveName_Layering_Arm_L = TEXT("Layering_Arm_L");
    this->CurveName_Layering_Arm_L_Add = TEXT("Layering_Arm_L_Add");
    this->CurveName_Layering_Arm_L_LS = TEXT("Layering_Arm_L_LS");
    this->CurveName_Layering_Arm_R = TEXT("Layering_Arm_R");
    this->CurveName_Layering_Arm_R_Add = TEXT("Layering_Arm_R_Add");
    this->CurveName_Layering_Arm_R_LS = TEXT("Layering_Arm_R_LS");
    this->CurveName_Layering_Hand_L = TEXT("Layering_Hand_L");
    this->CurveName_Layering_Hand_R = TEXT("Layering_Hand_R");
    this->CurveName_Layering_Head_Add = TEXT("Layering_Head_Add");
    this->CurveName_Layering_Spine_Add = TEXT("Layering_Spine_Add");
    this->CurveName_Mask_AimOffset = TEXT("Mask_AimOffset");
    this->CurveName_Mask_FootstepSound = TEXT("Mask_FootstepSound");
    this->CurveName_Mask_LandPrediction = TEXT("Mask_LandPrediction");
    this->CurveName_RotationAmount = TEXT("RotationAmount");
    this->CurveName_W_Gait = TEXT("W_Gait");
    this->CurveName_YawOffset = TEXT("YawOffset");
    this->CurveName_Mask_HeadTracking = TEXT("Mask_HeadTracking");
    this->CurveName_Mask_IK = TEXT("Mask_IK");
    this->DiagonalScaleAmountCurve = NULL;
    this->StrideBlend_N_Walk = NULL;
    this->StrideBlend_N_Run = NULL;
    this->StrideBlend_C_Walk = NULL;
    this->LandPredictionCurve = NULL;
    this->LeanInAirCurve = NULL;
    this->YawOffset_FB = NULL;
    this->YawOffset_LR = NULL;
    this->TransitionAnim_R = NULL;
    this->TransitionAnim_L = NULL;
    this->BoneBallL = TEXT("ball_l");
    this->BoneBallR = TEXT("ball_r");
    this->BoneAnkleBckL = TEXT("ankle_bck_l");
    this->BoneAnkleBckR = TEXT("ankle_bck_r");
    this->SpineRotationBoneCount = 4;
    this->VelDirectionHeadTrackCameraForwardAngleLimit = 150.00f;
    this->VelDirectionHeadTrackSmoothing = 0.25f;
    this->bEnableIK = false;
    this->HeadTrackingBlendTime = 0.50f;
    this->HeadTrackingYawLimit = 45.00f;
    this->HeadTrackingPitchLimit = 22.50f;
    this->HeadTrackingDistanceMin = 0.00f;
    this->HeadTrackingMaxTurnSpeed = 720.00f;
    this->NatAnimProperties = NULL;
}

void UFGKCharacterAnimInstance::SetTrackedHipsDirection(EFGKHipsDirection HipsDirection) {
}

void UFGKCharacterAnimInstance::SetOverlayOverrideState(int32 OverlayOverride) {
}

void UFGKCharacterAnimInstance::SetGroundedEntryState(EFGKGroundedEntryState NewGroundedEntryState) {
}

void UFGKCharacterAnimInstance::PlayTransitionChecked(const FFGKDynamicMontageParams& Parameters) {
}

void UFGKCharacterAnimInstance::PlayTransition(const FFGKDynamicMontageParams& Parameters) {
}

void UFGKCharacterAnimInstance::PlayDynamicTransition(float ReTriggerDelay, const FFGKDynamicMontageParams& Parameters) {
}

void UFGKCharacterAnimInstance::OnPivot() {
}

bool UFGKCharacterAnimInstance::CanDynamicTransition() const {
    return false;
}


