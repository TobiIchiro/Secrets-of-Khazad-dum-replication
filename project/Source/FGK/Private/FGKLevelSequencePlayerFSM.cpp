#include "FGKLevelSequencePlayerFSM.h"

UFGKLevelSequencePlayerFSM::UFGKLevelSequencePlayerFSM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFGKLevelSequencePlayerFSM::SetState(UFGKSequencerState* InParentState) {
}

UFGKSequencerState* UFGKLevelSequencePlayerFSM::GetState() const {
    return NULL;
}

UFGKLevelSequencePlayerFSM* UFGKLevelSequencePlayerFSM::CreateFGKLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, AFGKLevelSequenceActor*& OutActor, FName Label) {
    return NULL;
}


