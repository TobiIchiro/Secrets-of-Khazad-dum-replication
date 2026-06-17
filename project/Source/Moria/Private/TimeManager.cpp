#include "TimeManager.h"
#include "Net/UnrealNetwork.h"

ATimeManager::ATimeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkRtpc_Time = NULL;
    this->AkRtpc_DayNight = NULL;
    this->TimeToRtpcRemap = NULL;
    this->RealMinutesPerGameDay = 1440.00f;
    this->StartingTimeInHours = 0.00f;
    this->NightStart = 21;
    this->NightEnd = 6;
    this->ElapsedPartialGameMinute = 0.00f;
    this->GameTimeInMinutes = 0;
    this->CurrentHour = -1;
    this->CurrentDay = -1;
    this->CurrentPeriodIndex = 0;
    this->PreviousTimeIndex = 0;
    this->PrevOnDawnDay = 0;
}

bool ATimeManager::ShouldDoDayNightCycle() const {
    return false;
}

void ATimeManager::SetShouldDoDayNightCycle(const bool bShouldDoCycleIn) {
}

void ATimeManager::OnRep_RefreshGameTime(int32 OldGameTimeInMinutes) {
}

bool ATimeManager::IsNighttime() const {
    return false;
}

FClockTimePeriod ATimeManager::GetTimePeriod() {
    return FClockTimePeriod{};
}

FText ATimeManager::GetTimeName() const {
    return FText::GetEmpty();
}

void ATimeManager::GetGameTime(bool bTwentyFourHour, int32& Day, int32& Hour, int32& Minute, bool& bPM) const {
}

int32 ATimeManager::GetGameMinute() const {
    return 0;
}

ENpcSchedule ATimeManager::GetDefaultNpcScheduleAtHour(int32 Minute) const {
    return ENpcSchedule::None;
}

void ATimeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATimeManager, GameTimeInMinutes);
}


