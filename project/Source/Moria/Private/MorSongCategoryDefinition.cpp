#include "MorSongCategoryDefinition.h"

UMorSongCategoryDefinition::UMorSongCategoryDefinition() {
    this->SongType = EMSongType::None;
    this->EndCondition = 3;
    this->bHasAmbientTrack = false;
    this->AmbientTrackVoiceIndex = 9;
    this->bAutoEscalate = false;
    this->AutoEscalateSeconds = 10.00f;
    this->bStopAllHummingWhenStartingSinging = false;
    this->SongAbortedButton = NULL;
    this->SongCompletedButton = NULL;
}


