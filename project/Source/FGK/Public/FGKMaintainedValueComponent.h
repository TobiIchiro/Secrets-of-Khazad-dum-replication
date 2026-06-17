#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKReplenishable.h"
#include "MaintainedValueChangedDelegate.h"
#include "ValueIsMaxDelegate.h"
#include "ValueIsMinDelegate.h"
#include "FGKMaintainedValueComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKMaintainedValueComponent : public UActorComponent, public IFGKReplenishable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaintainedValueChanged OnValueChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueIsMin ValueMinHitDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueIsMax ValueMaxHitDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaintainedValue;
    
public:
    UFGKMaintainedValueComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool SetMaintainedValue(float NewValue);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ValueChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Replenish(const float Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueMinHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueMaxHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ValueChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaintainedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReplenish(const float Value) const;
    

    // Fix for true pure virtual functions not being implemented
};

