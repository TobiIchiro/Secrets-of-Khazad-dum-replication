#include "MorStartSongRequest.h"

FMorStartSongRequest::FMorStartSongRequest() {
    this->TargetComponent = NULL;
    this->SongType = EMSongType::None;
    this->InitialState = EMusicState::None;
    this->SourceActor = NULL;
    this->SpecificSongSectionIndex = 0;
}

