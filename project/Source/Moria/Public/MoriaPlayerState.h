#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "EMorAIWaveEncounterState.h"
#include "MorPlayerStateAwarenessTrackingChangedDelegate.h"
#include "MorPlayerStateHordeStateChangedDelegate.h"
#include "MorPlayerStateSiegeEndedDelegate.h"
#include "MorPlayerStateSiegeLocationChangedDelegate.h"
#include "MorPlayerStateSiegeStartedDelegate.h"
#include "MoriaPlayerState.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMoriaPlayerState : public APlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerColor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlayerStateAwarenessTrackingChanged OnAwarenessTrackingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlayerStateHordeStateChanged OnHordeStateChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoesZoneTrackAwareness, meta=(AllowPrivateAccess=true))
    bool bDoesZoneTrackAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HordeState, meta=(AllowPrivateAccess=true))
    EMorAIWaveEncounterState HordeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHordeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HordeAwarenessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HordeAwarenessThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HordeChance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlayerStateSiegeStarted OnSiegeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlayerStateSiegeEnded OnSiegeEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlayerStateSiegeLocationChanged OnSiegeLocationChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsSiegeActive, meta=(AllowPrivateAccess=true))
    bool bIsSiegeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SiegeLocation, meta=(AllowPrivateAccess=true))
    FVector SiegeLocation;
    
public:
    AMoriaPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SiegeLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HordeState(EMorAIWaveEncounterState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoesZoneTrackAwareness();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsSiegeActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSiegeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHordeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSiegeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHordeRollingAwarenessThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHordeChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHordeAwarenessValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorAIWaveEncounterState GetCurrentHordeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesZoneTrackAwareness() const;
    
};

