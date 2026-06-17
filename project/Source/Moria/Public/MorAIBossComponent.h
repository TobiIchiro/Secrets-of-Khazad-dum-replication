#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorAIBossHealthChangeDelegate.h"
#include "MorAIBossHealthbarToggleDelegate.h"
#include "MorAIBossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIBossHealthbarToggle OnHealthBarToggle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIBossHealthChange OnHealthChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShouldShowHealthBar, meta=(AllowPrivateAccess=true))
    bool bShouldShowHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyEnterDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyExitDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BossDisplayName;
    
public:
    UMorAIBossComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ShowHealthBar(bool bInShowHealthBar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowHealthBar() const;
    
    UFUNCTION(BlueprintCallable)
    void PreformLocalPlayerDistanceCheck();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldShowHealthBar();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHealth(float& Health, float& MaxHealth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBossDisplayName() const;
    
};

