#pragma once
#include "CoreMinimal.h"
#include "GameplayAttributeData.h"
#include "MoriaAttributeSet.h"
#include "CharacterAttributeSet.generated.h"

UCLASS(Blueprintable)
class MORIA_API UCharacterAttributeSet : public UMoriaAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stamina, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Stamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxStamina, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaminaRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegenInitialDelay, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaminaRegenInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaRegenPeriod, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaminaRegenPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaminaCostScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaminaCostScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestorationPower, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RestorationPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FreeRecipeChance, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FreeRecipeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Armor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxArmor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackPower, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackPowerUnarmed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackPowerUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackPowerFoot, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackPowerFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackPowerHead, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackPowerHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageReduction, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageProtection, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageProtection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlockStrength, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BlockStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSpeedScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MoveSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JumpVelocity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData JumpVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GravityScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Food, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Food;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxFood, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FoodRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FoodRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Energy, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Energy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxEnergy, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyCostScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyCostScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Morale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Morale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxMorale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoraleRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MoraleRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TemperatureModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColdBuildupRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ColdBuildupRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColdRecoverRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ColdRecoverRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoisonBuildupRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PoisonBuildupRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoisonRecoverRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PoisonRecoverRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShadowPoisonBuildupRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ShadowPoisonBuildupRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShadowPoisonRecoverRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ShadowPoisonRecoverRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrewRecoverRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BrewRecoverRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BrewIncoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementSoundMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MovementSoundMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Taunt, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Taunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MiningEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MiningEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MiningStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MiningStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BuildingEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildingStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BuildingStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestorationStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RestorationStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SprintingEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SprintingEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SprintingStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SprintingStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecialAttackEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpecialAttackEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecialAttackStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpecialAttackStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AttackEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClimbingEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ClimbingEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DodgeEnergyCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DodgeEnergyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DodgeStaminaCost, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DodgeStaminaCost;
    
    UCharacterAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Taunt(const FGameplayAttributeData& OldTaunt);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenPeriod(const FGameplayAttributeData& OldStaminaRegenPeriod);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegenInitialDelay(const FGameplayAttributeData& OldStaminaRegenInitialDelay);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaRegen(const FGameplayAttributeData& OldStaminaRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaminaCostScale(const FGameplayAttributeData& OldStaminaCostScale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintingStaminaCost(const FGameplayAttributeData& OldSprintingStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintingEnergyCost(const FGameplayAttributeData& OldSprintingEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecialAttackStaminaCost(const FGameplayAttributeData& OldSpecialAttackStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecialAttackEnergyCost(const FGameplayAttributeData& OldSpecialAttackEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShadowPoisonRecoverRate(const FGameplayAttributeData& OldShadowPoisonRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShadowPoisonBuildupRate(const FGameplayAttributeData& OldShadowPoisonBuildupRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestorationStaminaCost(const FGameplayAttributeData& OldRestorationStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestorationPower(const FGameplayAttributeData& OldRestorationPower);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoisonRecoverRate(const FGameplayAttributeData& OldPoisonRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoisonBuildupRate(const FGameplayAttributeData& OldPoisonBuildupRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSpeedScale(const FGameplayAttributeData& OldMoveSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementSoundMultiplier(const FGameplayAttributeData& OldMovementSoundMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoraleRegen(const FGameplayAttributeData& OldMoraleRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Morale(const FGameplayAttributeData& OldMorale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MiningStaminaCost(const FGameplayAttributeData& OldMiningStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MiningEnergyCost(const FGameplayAttributeData& OldMiningEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxMorale(const FGameplayAttributeData& OldMaxMorale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxFood(const FGameplayAttributeData& OldMaxFood);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxEnergy(const FGameplayAttributeData& OldMaxEnergy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxArmor(const FGameplayAttributeData& OldMaxArmor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_JumpVelocity(const FGameplayAttributeData& OldJumpVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityScale(const FGameplayAttributeData& OldGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FreeRecipeChance(const FGameplayAttributeData& OldFreeRecipeChance);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FoodRegen(const FGameplayAttributeData& OldFoodRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Food(const FGameplayAttributeData& OldFood);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyRegen(const FGameplayAttributeData& OldEnergyRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyCostScale(const FGameplayAttributeData& OldEnergyCostScale);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Energy(const FGameplayAttributeData& OldEnergy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DodgeStaminaCost(const FGameplayAttributeData& OldDodgeStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DodgeEnergyCost(const FGameplayAttributeData& OldDodgeEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageReduction(const FGameplayAttributeData& OldDamageReduction);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageProtection(const FGameplayAttributeData& OldDamagePassthrough);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ColdRecoverRate(const FGameplayAttributeData& OldColdRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ColdBuildupRate(const FGameplayAttributeData& OldColdBuildupRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClimbingEnergyCost(const FGameplayAttributeData& OldClimbingEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingStaminaCost(const FGameplayAttributeData& OldBuildingStaminaCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildingEnergyCost(const FGameplayAttributeData& OldBuildingEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrewRecoverRate(const FGameplayAttributeData& OldBrewRecoverRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlockStrength(const FGameplayAttributeData& OldBlockStrength);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackPowerUnarmed(const FGameplayAttributeData& OldAttackPowerUnarmed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackPowerHead(const FGameplayAttributeData& OldAttackPowerHead);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackPowerFoot(const FGameplayAttributeData& OldAttackPowerFoot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackEnergyCost(const FGameplayAttributeData& OldAttackEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Armor(const FGameplayAttributeData& OldArmor);
    
};

