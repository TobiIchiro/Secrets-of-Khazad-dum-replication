#include "MorMainMenuPlayerController.h"
#include "Templates/SubclassOf.h"

AMorMainMenuPlayerController::AMorMainMenuPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CurrentModeImpl = NULL;
}

void AMorMainMenuPlayerController::RequestModeChange(EMorMainMenuMode NewMode) {
}

void AMorMainMenuPlayerController::HandlePreparingToChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode) {
}

void AMorMainMenuPlayerController::HandlePreChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode) {
}

void AMorMainMenuPlayerController::HandlePostChangeMode(EMorMainMenuMode NewMode, EMorMainMenuMode FromMode) {
}

UObject* AMorMainMenuPlayerController::GetModeImplementation(TSubclassOf<UMorMainMenuPlayerControllerModeImpl> ImplementationClass) {
    return NULL;
}

AMorMainMenuGameMode* AMorMainMenuPlayerController::GetMainMenuGameMode() const {
    return NULL;
}


