#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayCueParameters.h"
#include "GameplayTagContainer.h"
#include "MorSaveGameObjectNative.h"
#include "MoriaAbilitySystemComponent.generated.h"

class UMAttributeUIInfo;
class UMorActiveEffectUIInfo;
class UMorAttributeDisplaySettings;
class UMorGameplayLightSamplerComponent;
class USurvivalSettings;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMoriaAbilitySystemComponent : public UAbilitySystemComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USurvivalSettings* SurvivalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorAttributeDisplaySettings* AttributeDefinitions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorActiveEffectUIInfo*> EffectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMAttributeUIInfo*> AttributeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorGameplayLightSamplerComponent* LightSampler;
    
public:
    UMoriaAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMorActiveEffectUIInfo*> GetEffectUIInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMAttributeUIInfo*> GetAttributeUIInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    

    // Fix for true pure virtual functions not being implemented
};

