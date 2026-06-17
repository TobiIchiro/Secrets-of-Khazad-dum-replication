#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "MoriaGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "WorldTargetAbility.generated.h"

class AActor;
class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetData;
class UFGKUIScreen;
class UGameplayEffect;
class UUserWidget;

UCLASS(Blueprintable, HideDropdown)
class MORIA_API UWorldTargetAbility : public UMoriaGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayAbilityTargetActor> TargetingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> HudClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> EffectsWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitTargetData* CurrentWaitTask;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UWorldTargetAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValidData(const FGameplayAbilityTargetDataHandle& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnScreenShown(UFGKUIScreen* ScreenInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenHidden(UFGKUIScreen* ScreenInstance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCanceled(const FGameplayAbilityTargetDataHandle& Data);
    
};

