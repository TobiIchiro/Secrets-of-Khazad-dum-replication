#include "MorSongDefinition.h"

FMorSongDefinition::FMorSongDefinition() {
    this->SongType = EMSongType::None;
    this->bKnownAtStart = false;
    this->bCanSelectRandomly = false;
    this->StartEvent = NULL;
    this->SectionCount = 0;
    this->Tempo = 0.00f;
    this->bIsCallResponse = false;
}

