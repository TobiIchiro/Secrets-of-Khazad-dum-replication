#include "MorSaveGameManager.h"
#include "MorSaveFileManager.h"

UMorSaveGameManager::UMorSaveGameManager() {
    this->SaveFileManager = CreateDefaultSubobject<UMorSaveFileManager>(TEXT("SaveFileManager"));
    this->LoadWorldSaveGame = NULL;
    this->InputComponent = NULL;
    this->GameSessionManager = NULL;
    this->SaveGamePopUpWidget = NULL;
}

void UMorSaveGameManager::OnHostGameStatusChanged(EPlayerHostStatus HostStatus, EHostGameFailedReason FailedReason) {
}


