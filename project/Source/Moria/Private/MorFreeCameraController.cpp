#include "MorFreeCameraController.h"
#include "MorCheatManager.h"

AMorFreeCameraController::AMorFreeCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UMorCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    const FProperty* p_bIsLocalPlayerController = GetClass()->FindPropertyByName("bIsLocalPlayerController");
    (*p_bIsLocalPlayerController->ContainerPtrToValuePtr<bool>(this)) = true;
    this->OriginalPlayer = NULL;
    this->OriginalControllerRef = NULL;
    this->FreeCameraHUD = NULL;
    this->SpeedScale = 1.00f;
    this->InitialMaxSpeed = 0.00f;
    this->InitialAccel = 0.00f;
    this->InitialDecel = 0.00f;
}

void AMorFreeCameraController::UnregisterInputComponent() {
}

void AMorFreeCameraController::SetupInputComponent() {
}

void AMorFreeCameraController::SetStepDOF(float stepDOF) {
}

void AMorFreeCameraController::SetRange(float Value) {
}

void AMorFreeCameraController::SetPawnMovementSpeedScale(float NewSpeedScale) {
}

void AMorFreeCameraController::SetMinFOV(float minFOV) {
}

void AMorFreeCameraController::SetMinFocalDistance(float Value) {
}

void AMorFreeCameraController::SetMinDOF(float minDOF) {
}

void AMorFreeCameraController::SetMaxFOV(float maxFOV) {
}

void AMorFreeCameraController::SetMaxFocalDistance(float Value) {
}

void AMorFreeCameraController::SetMaxDOF(float maxDOF) {
}

void AMorFreeCameraController::SetMaxAutoexitDistance(float Distance) {
}

void AMorFreeCameraController::SetDeadZone(float Zone) {
}

void AMorFreeCameraController::SetControllerAsInput(bool bIsController) {
}



bool AMorFreeCameraController::IsPauseBlocked() const {
    return false;
}

void AMorFreeCameraController::DeactivateFreeCamera() {
}


