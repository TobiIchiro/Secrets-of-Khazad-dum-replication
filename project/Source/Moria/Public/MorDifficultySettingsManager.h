#pragma once
#include "CoreMinimal.h"
#include "EMorDifficultyPreset.h"
#include "MorDifficultySliderRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacks.h"
#include "MorSaveGameObjectNative.h"
#include "MorSavedDifficultySetting.h"
#include "MorSavedSliderLocation.h"
#include "Templates/SubclassOf.h"
#include "MorDifficultySettingsManager.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class MORIA_API AMorDifficultySettingsManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacks {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorSavedDifficultySetting> SavedDifficultySettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> ScalingGameplayEffectClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> EnemyScalingGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> LoadedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorSavedSliderLocation> SavedSliderLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorSavedSliderLocation> PendingSliderLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    EMorDifficultyPreset CurrentPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDifficultyPreset PendingPreset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnScreenMessageLength;
    
public:
    AMorDifficultySettingsManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnSliderUpdated(FMorDifficultySliderRowHandle SliderRowHandle, int32 NewSliderLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyPresetSelected(EMorDifficultyPreset SelectedDifficultyPreset);
    
    UFUNCTION(BlueprintCallable)
    void InitializeToPreset(EMorDifficultyPreset InitialPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorSavedSliderLocation> GetSliders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorDifficultyPreset GetCurrentPreset() const;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmDifficultyChanges();
    
    UFUNCTION(BlueprintCallable)
    void CancelDifficultyChanges();
    

    // Fix for true pure virtual functions not being implemented
};

