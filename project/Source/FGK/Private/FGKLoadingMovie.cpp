#include "FGKLoadingMovie.h"

FFGKLoadingMovie::FFGKLoadingMovie() {
    this->MovieSource = NULL;
    this->bPlayUntilStopped = false;
    this->bEndOnLevelLoaded = false;
    this->PlayTime = 0.00f;
}

