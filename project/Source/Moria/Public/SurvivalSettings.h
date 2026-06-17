#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayAttribute.h"
#include "StatLinkedBuff.h"
#include "Templates/SubclassOf.h"
#include "SurvivalSettings.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class USurvivalSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatLinkedBuff> BuffsForStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> NoEpicPackBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EnergyRegenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaPerPip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyMaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyPerStaminaPip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaminaPipsAtZeroEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StaminaRegenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetStaminaTimerOnlyOnMaxChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintingPreventsStaminaRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotMovingOnGroundPreventsStaminaRegen;
    
    USurvivalSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPipsForEnergy(float Energy) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FStatLinkedBuff> GetBuffsFromAttribute(const FGameplayAttribute& Attribute);
    
};

