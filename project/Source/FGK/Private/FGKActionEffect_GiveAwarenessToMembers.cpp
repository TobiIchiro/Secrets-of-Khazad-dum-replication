#include "FGKActionEffect_GiveAwarenessToMembers.h"
#include "FGKAISquadState.h"

UFGKActionEffect_GiveAwarenessToMembers::UFGKActionEffect_GiveAwarenessToMembers() {
    this->OwnerClass = UFGKAISquadState::StaticClass();
    this->AwarenessLevelToGive = EFGKAIAwarenessLevel::Full;
    this->RequestInterval = 1.00f;
}


