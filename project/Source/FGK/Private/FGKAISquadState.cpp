#include "FGKAISquadState.h"

UFGKAISquadState::UFGKAISquadState() {
    this->RequiredChildType = UFGKAISquadState::StaticClass();
    this->Squad = NULL;
    this->Blackboard = NULL;
}

void UFGKAISquadState::OnMemberRemoved(AFGKAISquad* InSquad, AFGKAIController* RemovedMember) {
}

void UFGKAISquadState::OnMemberAdded(AFGKAISquad* InSquad, AFGKAIController* AddedMember) {
}


