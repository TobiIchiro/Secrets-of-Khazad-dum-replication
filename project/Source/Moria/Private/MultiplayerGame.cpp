#include "MultiplayerGame.h"

FMultiplayerGame::FMultiplayerGame() {
    this->PlayerCount = 0;
    this->GameState = EJoinModalGameState::ReadyToJoin;
    this->bIsVersionMatch = false;
}

