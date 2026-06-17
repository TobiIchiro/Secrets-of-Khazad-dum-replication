#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "EFGKGetDefinitionResult.h"
#include "EBuildFailureReason.h"
#include "EjectItemsRequest.h"
#include "MorAutoFoundation.h"
#include "MorBase.h"
#include "MorPermitData.h"
#include "MorReplicatedManager.h"
#include "MorStabilityConfig.h"
#include "MorStabilityTier.h"
#include "Templates/SubclassOf.h"
#include "MorConstructionManager.generated.h"

class AActor;
class AMorDroppedItem;
class UAkAudioEvent;
class UDataTable;
class UGameplayEffect;
class UMorConstructionPermitComponent;
class UMorConstructionStabilityComponent;
class UNiagaraSystem;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorConstructionManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreplacedBlockStabilityCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityNeighborBoxExtentMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityNeighborSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityNeighborSearchCornerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionPointGridSizeEpsilon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ConstructionEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* StabilityLossVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StabilityLossSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultConstructVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultConstructSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultDeconstructVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultDeconstructSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorDroppedItem> DroppedItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropEjectForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropRotateForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBuildFailureReason, FText> ConstructionFailureMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultConstructionFailureMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAutoFoundation> AutoFoundations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoFoundationMaxGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName ConstructionSurfaceTraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarginalStability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorStabilityTier> StabilityTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStabilityConfig StabilityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ApexAvailabilityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VOOnRepairingConstruction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> BasePrefabs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Bases, meta=(AllowPrivateAccess=true))
    TArray<FMorBase> Bases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEjectItemsRequest> DeferredEjectRequests;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorConstructionStabilityComponent>> DeferredDestructions;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorConstructionStabilityComponent>> VoxelSupportQueue;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorConstructionStabilityComponent>> DeferredInitializations;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorConstructionStabilityComponent>> DeferredActivations;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UMorConstructionStabilityComponent>, float> DebugInViewTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorConstructionStabilityComponent*> AllStabilityComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorConstructionStabilityComponent*> PrioritizedStabilityComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UMorConstructionStabilityComponent*> VisitedStabilityComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorConstructionStabilityComponent*> TempNextNeighbors;
    
public:
    AMorConstructionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterRepairedConstruction(AActor* NewActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Bases();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDoStabilityLossEffects(const FVector& Location, const TArray<FBoxSphereBounds>& AllMeshBounds);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDoDeconstructionEffects(const FVector& Location, const FRotator& Rotation, const TArray<FBoxSphereBounds>& AllMeshBounds);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDoConstructionEffects(const FVector& Location, const FRotator& Rotation, const TArray<FBoxSphereBounds>& AllMeshBounds);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDestroyConstruction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidBase(FMorBase Base) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultGridSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorPermitData> GetConstructionPermitsForLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorBase GetBaseForPermit(UMorConstructionPermitComponent* Permit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FMorBase GetBaseContainingLocation(const FVector& Location, EFGKGetDefinitionResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equality_BaseData(FMorBase A, FMorBase B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBaseBoundsVisible() const;
    
};

