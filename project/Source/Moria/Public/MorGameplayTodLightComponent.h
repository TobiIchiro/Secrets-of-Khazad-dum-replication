#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClockTimePeriod.h"
#include "EGameplayTodLightMode.h"
#include "GameplayTodLightReceiveUpdatedDelegate.h"
#include "MorGameplayTodLightComponent.generated.h"

class ATimeManager;
class UMorGameplayLightSamplerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMorGameplayTodLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTodLightReceiveUpdated OnStartedReceivingLight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTodLightReceiveUpdated OnStoppedReceivingLight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATimeManager* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorGameplayLightSamplerComponent* LightSampler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayTodLightMode TimeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasLightInMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNighttime;
    
public:
    UMorGameplayTodLightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TimePeriodChanged(FClockTimePeriod TimePeriod, bool bQuiet);
    
    UFUNCTION(BlueprintCallable)
    bool IsReceivingLight();
    
};

