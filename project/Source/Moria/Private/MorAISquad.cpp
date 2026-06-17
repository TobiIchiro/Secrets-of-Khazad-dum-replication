#include "MorAISquad.h"

AMorAISquad::AMorAISquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCommunicateAwarenessEveryTick = true;
    this->MaxRangeToRecieveAwarenessOfTarget = 2000.00f;
}


