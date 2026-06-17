#include "MorNPCActivityDefinition.h"

FMorNPCActivityDefinition::FMorNPCActivityDefinition() {
    this->Activity = EMorNpcActivity::Idle;
    this->Icon = NULL;
    this->IconAnimation = EMorIconAnimation::Static;
    this->Category = EMorNpcActivityCategory::Normal;
    this->TrackAs = EMorNpcActivityTrackEvent::None;
}

