#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorDamageModifierRowHandle.h"
#include "MorFloraHarvestedEventDelegate.h"
#include "MorFloraReadyForHarvestEventDelegate.h"
#include "MorFloraReceptacleRowHandle.h"
#include "MorFloraVisualsChangedEventDelegate.h"
#include "MorResourceReceptacle.h"
#include "MorFloraReceptacle.generated.h"

class UMorGameplayLightSamplerComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorFloraReceptacle : public AMorResourceReceptacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraReadyForHarvestEvent ReadyForHarvest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraHarvestedEvent Harvested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraVisualsChangedEvent OnVisualsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraReceptacleRowHandle RowHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EmptyFloraMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasGrowthLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGrowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPrefersInShade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinimumFarmingLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageModifierRowHandle> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentItemCount, meta=(AllowPrivateAccess=true))
    int32 CurrentItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorGameplayLightSamplerComponent* LightSampler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentNightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentGrowCount;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastNightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHadEnoughLight;
    
public:
    AMorFloraReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentItemCount(int32 LastCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedMaxGrowCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorAnyItemRowHandle GetFloraItemHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearReceptacle();
    
};

