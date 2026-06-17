#include "FGKPlayerController.h"
#include "FGKActorFSMComponent.h"
#include "FGKCheatManager.h"
#include "Templates/SubclassOf.h"

AFGKPlayerController::AFGKPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UFGKCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->CheatsComponent = NULL;
    this->InputFSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InputFSMComp"));
    this->PossessedCharacter = NULL;
    this->MyCheatManager = NULL;
    this->ActiveCharacterInputState = NULL;
    this->CurrentAlternativeInputSchemeIndex = -1;
    this->bGameIsFocused = false;
    this->bUsingGamepad = false;
    this->LastMoveRightTime = 0.00f;
    this->LastLookTime = -1.00f;
}

void AFGKPlayerController::UnblockMenu(FName Menu) {
}

void AFGKPlayerController::SetUsingGamepad(bool bGamepad) {
}

void AFGKPlayerController::Server_DebugNextCharacter_Implementation(bool bReverse) {
}

void AFGKPlayerController::Server_CreateAndProcessNewCharacter_Implementation(AFGKBaseCharacter* CurrentCharacter, TSubclassOf<AFGKBaseCharacter> NewCharacterClass) {
}

void AFGKPlayerController::RequestTeleportTo(const FVector& DestLocation, const FRotator& DestRotation, const FFGKTeleportParams& TeleportParams) {
}

void AFGKPlayerController::RequestMenu(FName Menu) {
}

bool AFGKPlayerController::IsPlayerInputDisabled() const {
    return false;
}

FVector2D AFGKPlayerController::GetRotationRawInput() const {
    return FVector2D{};
}

UFGKActorFSMComponent* AFGKPlayerController::GetInputFSMComp() const {
    return NULL;
}

void AFGKPlayerController::DisablePlayerInput(bool bInDisablePlayerInput) {
}

void AFGKPlayerController::BlockMenu(FName Menu) {
}


