#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayAttributeData.h"
#include "MoriaAttributeSet.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMoriaAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Restore;
    
    UMoriaAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegen(const FGameplayAttributeData& OldHealthRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(const FGameplayAttributeData& OldHealth);
    
};

