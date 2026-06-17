#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKDieDelegateDelegate.h"
#include "FGKHealthModifiedDelegateDelegate.h"
#include "FGKHealthRegenDelegateDelegate.h"
#include "FGKReplenishable.h"
#include "Templates/SubclassOf.h"
#include "FGKHealthComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UFGKHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKHealthComponent : public UActorComponent, public IFGKReplenishable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHealthModifiedDelegate OnHealthModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHealthRegenDelegate OnRegenBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHealthRegenDelegate OnRegenEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKDieDelegate OnDie;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegenHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenTickDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bAcceptedAllDamageTypes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDefaultAcceptedAllDamageTypes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> AcceptedDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> BlacklistedDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> DefaultAcceptedDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> DefaultBlacklistedDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* Killer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DamageCausers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldKillWithAcceptedDamageType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTimeDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MinHealth;
    
public:
    UFGKHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHealthRatio(float NewHealthRatio, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* HealthChangeCauser);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealth, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* HealthChangeCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Kill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HealToMax();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HealthChanged(UFGKHealthComponent* HealthComp, float HealthValue, float HealthDelta, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Die(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HealthChanged(UFGKHealthComponent* HealthComp, float HealthValue, float HealthDelta, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Die(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void HealToMax();
    
    UFUNCTION(BlueprintCallable)
    void Heal(float HealAmount, AController* InstigatedBy, AActor* HealCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void Damage(float NewDamage, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    

    // Fix for true pure virtual functions not being implemented
};

