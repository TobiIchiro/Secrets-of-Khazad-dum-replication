#include "FGKMovieSceneStateSection.h"

UFGKMovieSceneStateSection::UFGKMovieSceneStateSection() {
    this->StateClass = NULL;
    this->bShouldFinishOnTimelineEnd = true;
    this->TargetType = EFGKStateSectionTargetType::OnlyInteractor;
    this->TargetRange = 0.00f;
}


