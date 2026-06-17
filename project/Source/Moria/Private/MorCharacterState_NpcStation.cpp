#include "MorCharacterState_NpcStation.h"

UMorCharacterState_NpcStation::UMorCharacterState_NpcStation() {
    this->StartSection = TEXT("intro");
    this->LoopingSection = TEXT("Loop");
    this->ExitSection = TEXT("Exit");
    this->BehaviorPoint = NULL;
}


