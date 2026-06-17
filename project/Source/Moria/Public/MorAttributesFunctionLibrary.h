#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorAttributesFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorAttributesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorAttributesFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTemperature(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStaminaRegenPeriod(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStaminaRegenInitialDelay(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStaminaRegen(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStaminaCostScale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStamina(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSprintingStaminaCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSprintingEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSpecialAttackStaminaCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSpecialAttackEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMoveSpeedScale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMoraleRegen(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMorale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMiningStaminaCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMiningEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxStamina(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxMorale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxHealth(const AActor* ActorWithAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxFood(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxEnergy(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxArmor(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLight(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetJumpVelocity(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHealthRegen(const AActor* ActorWithAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHealth(const AActor* ActorWithAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGravityScale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFreeRecipeChance(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFoodRegen(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFood(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEnergyRegen(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEnergyCostScale(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEnergy(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDodgeStaminaCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDodgeEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDamageReduction(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDamageProtection(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetClimbingEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBuildingStaminaCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBuildingEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlockStrength(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackSpeed(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackPowerUnarmed(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackPowerHead(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackPowerFoot(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackPower(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttackEnergyCost(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArmor(const AActor* Character);
    
};

