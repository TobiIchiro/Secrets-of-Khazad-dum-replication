#include "MorTimedQueue.h"

FMorTimedQueue::FMorTimedQueue() {
    this->World = NULL;
    this->ExpirationTime = 0.00f;
    this->RemainingDuration = 0.00f;
    this->bIsRunning = false;
}

