#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorSaveGameObjectNative.h"
#include "MorThresholdEffectRowHandle.h"
#include "ThresholdEffectStruct.h"
#include "MorThresholdEffectComponent.generated.h"

class UMoriaAbilitySystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorThresholdEffectComponent : public UActorComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThresholdEffectStruct> EffectsToTrack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoriaAbilitySystemComponent* MoriaAbilitySystem;
    
public:
    UMorThresholdEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFilledPercentage(FMorThresholdEffectRowHandle RowHandle) const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyInstantMetaChange(const FName EffectName, float Delta, bool bUseDeltaAsNewValueInstead);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyEffectReset(const FName EffectName);
    

    // Fix for true pure virtual functions not being implemented
};

