#include "ClockTimePeriod.h"

FClockTimePeriod::FClockTimePeriod() {
    this->StartHour = 0.00f;
    this->LightModifier = 0.00f;
    this->TemperatureModifier = 0.00f;
    this->MealTime = EMealTime::None;
    this->NpcSchedule = ENpcSchedule::None;
}

