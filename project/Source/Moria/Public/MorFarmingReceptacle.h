#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "EMorFarmingFloraType.h"
#include "MorDamageModifierRowHandle.h"
#include "MorFloraPlantedEventDelegate.h"
#include "MorFloraUnplantedEventDelegate.h"
#include "MorResourceReceptacle.h"
#include "MorSaveDataRuntimeActorRecordHandle.h"
#include "MorFarmingReceptacle.generated.h"

class AMorPlantedFloraReceptacle;
class UMorGameplayLightSamplerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorFarmingReceptacle : public AMorResourceReceptacle, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraPlantedEvent FloraPlanted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraUnplantedEvent FloraUnplanted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageModifierRowHandle> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMorFarmingFloraType> PlantableTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SproutStageDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GrowingStageDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReadyStageDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpoiledStageDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GrowthBlockedDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TooMuchLightDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotEnoughLightDisplayName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorGameplayLightSamplerComponent* LightSampler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlantedFlora, meta=(AllowPrivateAccess=true))
    AMorPlantedFloraReceptacle* PlantedFlora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorSaveDataRuntimeActorRecordHandle PlantedFloraActorRecord;
    
public:
    AMorFarmingReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlantedFlora();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorPlantedFloraReceptacle* GetPlantedFlora() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlantFloraType(const EMorFarmingFloraType FloraType) const;
    

    // Fix for true pure virtual functions not being implemented
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return nullptr; }
};

