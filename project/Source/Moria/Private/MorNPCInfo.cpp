#include "MorNPCInfo.h"

FMorNPCInfo::FMorNPCInfo() {
    this->bGreetingPending = false;
    this->GreetingAccumulator = 0.00f;
    this->ScheduleCache = ENpcSchedule::None;
    this->TempWorkHours = 0;
    this->TempMeals = 0;
}

