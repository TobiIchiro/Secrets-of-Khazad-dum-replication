#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorCharacterFunctionLibrary.generated.h"

class ACharacter;
class UObject;
class USurvivalSettings;

UCLASS(Blueprintable)
class MORIA_API UMorCharacterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorCharacterFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KnockbackPlayers(UObject* WorldContextObject, FVector KnockbackLocation, float KnockbackRadius, float KnockbackForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USurvivalSettings* GetSurvivalSettings(const ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMaxStaminaBlockedByLowLight(const ACharacter* Character, int32& OutPips, float& OutUnits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxEnergyBlockedByLowLight(const ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLightDangerThreshold(const ACharacter* Character);
    
};

