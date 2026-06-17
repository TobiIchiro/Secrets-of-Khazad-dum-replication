#pragma once
#include "CoreMinimal.h"
#include "EMorThrowLightState.h"
#include "MorItemBase.h"
#include "MorThrowLightRowHandle.h"
#include "MorThrowLight.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorThrowLight : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorThrowLightRowHandle RowHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorThrowLightState CurrentState;
    
public:
    AMorThrowLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateChanged(EMorThrowLightState NewState, EMorThrowLightState OldState);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EMorThrowLightState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorThrowLightState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationSeconds() const;
    
};

