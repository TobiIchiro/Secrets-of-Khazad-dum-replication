#pragma once
#include "CoreMinimal.h"
#include "EMorGrowthStage.h"
#include "MorFloraReceptacle.h"
#include "MorFloraTimer.h"
#include "MorPlantedFloraGrowthStageDelegate.h"
#include "MorPlantedFloraUpdateGrowthVisualsDelegate.h"
#include "MorPostActivateActorInitializer.h"
#include "MorPlantedFloraReceptacle.generated.h"

class AActor;
class AMorFarmingManager;
class ASleepManager;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorPlantedFloraReceptacle : public AMorFloraReceptacle, public IMorPostActivateActorInitializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlantedFloraUpdateGrowthVisuals UpdateGrowthVisuals;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlantedFloraGrowthStage OnGrowthStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SproutFloraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> GrowingFloraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ReadyFloraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SpoiledFloraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentGrowthStage, meta=(AllowPrivateAccess=true))
    EMorGrowthStage CurrentGrowthStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreGrowthBroadcasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASleepManager* SleepManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorFarmingManager* FarmingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorFloraTimer GrowthProgressTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWasGrowthBlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 VariableGrowthTime;
    
public:
    AMorPlantedFloraReceptacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGrowthStage(EMorGrowthStage LastGrowthStage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorGrowthStage GetNextGrowthStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorGrowthStage GetCurrentGrowthStage() const;
    

    // Fix for true pure virtual functions not being implemented
};

