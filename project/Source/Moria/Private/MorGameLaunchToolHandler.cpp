#include "MorGameLaunchToolHandler.h"

UMorGameLaunchToolHandler::UMorGameLaunchToolHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScreenWidgetClass = NULL;
    this->GameSessionManager = NULL;
    this->Configuration = NULL;
}

bool UMorGameLaunchToolHandler::StartGame() {
    return false;
}

UMorGameLaunchToolScreen* UMorGameLaunchToolHandler::OpenScreenWidget() {
    return NULL;
}

void UMorGameLaunchToolHandler::OpenGameLaunchToolScene(const UObject* WorldContext) {
}

void UMorGameLaunchToolHandler::OnHostGameStatusChanged(EPlayerHostStatus HostStatus, EHostGameFailedReason FailedReason) {
}

UMorGameLaunchToolConfiguration* UMorGameLaunchToolHandler::GetConfiguration() {
    return NULL;
}

void UMorGameLaunchToolHandler::CloseScreenWidget() {
}


