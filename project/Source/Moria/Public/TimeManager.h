#pragma once
#include "CoreMinimal.h"
#include "ClockTimePeriod.h"
#include "ENpcSchedule.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "OnDayTickDelegate.h"
#include "OnHourTickDelegate.h"
#include "OnTimePeriodChangedDelegate.h"
#include "TimeManager.generated.h"

class UAkRtpc;
class UCurveFloat;

UCLASS(Blueprintable)
class MORIA_API ATimeManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AkRtpc_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AkRtpc_DayNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeToRtpcRemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealMinutesPerGameDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingTimeInHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClockTimePeriod> TimePeriods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ElapsedPartialGameMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_RefreshGameTime, meta=(AllowPrivateAccess=true))
    int32 GameTimeInMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPeriodIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousTimeIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimePeriodChanged OnTimePeriodChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHourTick OnHourTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHourTick OnDayTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDayTick OnDawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Transient, meta=(AllowPrivateAccess=true))
    int32 PrevOnDawnDay;
    
public:
    ATimeManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDoDayNightCycle() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldDoDayNightCycle(const bool bShouldDoCycleIn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RefreshGameTime(int32 OldGameTimeInMinutes);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNighttime() const;
    
    UFUNCTION(BlueprintCallable)
    FClockTimePeriod GetTimePeriod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTimeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameTime(bool bTwentyFourHour, int32& Day, int32& Hour, int32& Minute, bool& bPM) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameMinute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcSchedule GetDefaultNpcScheduleAtHour(int32 Minute) const;
    

    // Fix for true pure virtual functions not being implemented
};

