#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKCharacterAnimInstance.h"
#include "EWatcherBodyCState.h"
#include "EWatcherTentacleCState.h"
#include "WatcherAnimInstance.generated.h"

class AWatcherCharacter;

UCLASS(Blueprintable, NonTransient)
class MORIA_API UWatcherAnimInstance : public UFGKCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatcherDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherBodyCState BodyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleBlendDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleAimDelay;
    
    UWatcherAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TentacleStateChanged(int32 TentacleIndex, EWatcherTentacleCState OldState, EWatcherTentacleCState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetTentacleAimLocation(int32 TentacleIndex, FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTentacleStateConfirmed(int32 TentacleIndex, EWatcherTentacleCState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyStateConfirmed(EWatcherBodyCState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWatcherTentacleCState GetTentacleState(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTentacleBlendWeight(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTentacleAimLocation(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTentacleAimAlpha(int32 TentacleIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmTentacleState(int32 TentacleIndex, EWatcherTentacleCState State);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmBodyState(EWatcherBodyCState State);
    
    UFUNCTION(BlueprintCallable)
    void CancelTentacleAim(int32 TentacleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BodyStateChanged(EWatcherBodyCState OldState, EWatcherBodyCState NewState);
    
};

