#pragma once
#include "CoreMinimal.h"
#include "FGKLevelSequenceActor.h"
#include "MorLevelSequenceActor.generated.h"

class AActor;
class APawn;
class APlayerController;

UCLASS(Blueprintable)
class MORIA_API AMorLevelSequenceActor : public AFGKLevelSequenceActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayingEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayingEventDelegate OnStartedPlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayingEventDelegate OnStoppedPlaying;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideTransformOriginToBubble: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDisableCinematicMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActivateGamePauseScope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableBackgroundMusic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableEncounters: 1;
    
public:
    AMorLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StoppedPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartedPlaying();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTransformOriginToCurrentBubble();
    
    UFUNCTION(BlueprintCallable)
    void SetTransformOriginToActor(AActor* OriginActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetBindingsByTags(const TArray<FName>& BindingTags);
    
    UFUNCTION(BlueprintCallable)
    void ResetBindingByTag(const FName& BindingTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareSequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSequencePlayerStateChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnablePlayerCinematicModeFromPawn(APawn* PlayerPawn, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayerCinematicMode(APlayerController* PlayerController, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    void DisableCinematicMode();
    
};

