#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "OnHooverButtonPressedDelegate.h"
#include "OnHooverButtonReleasedDelegate.h"
#include "OnHooverStateChangedDelegate.h"
#include "OnStartHooveringDelegate.h"
#include "MorHooverComponent.generated.h"

class UAkAudioEvent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorHooverComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHooverStateChanged OnHooverStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHooverButtonPressed OnHooverButtonPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartHoovering OnStartHoovering;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHooverButtonReleased OnHooverButtonReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillHooverActivates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* VFXSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HooverEnabled, meta=(AllowPrivateAccess=true))
    bool bHooverEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedEffect;
    
public:
    UMorHooverComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetEnabled(bool bNowOn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HooverEnabled(bool OldEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingTowardsHoover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHooverTime() const;
    
};

