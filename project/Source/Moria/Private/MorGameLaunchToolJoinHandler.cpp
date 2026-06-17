#include "MorGameLaunchToolJoinHandler.h"

UMorGameLaunchToolJoinHandler::UMorGameLaunchToolJoinHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SessionManager = NULL;
}

void UMorGameLaunchToolJoinHandler::HandleOnJoinGameStatusChanged(EPlayerJoinStatus JoinStatus, EPlayerJoinFailReason FailReason) {
}


