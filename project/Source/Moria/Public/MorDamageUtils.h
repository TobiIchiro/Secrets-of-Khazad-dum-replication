#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "MorDamageUtils.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorDamageUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorDamageUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetTierFromItem(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetTierFromActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GetDamageTypes(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetDamageType(const FItemHandle& ItemHandle);
    
};

