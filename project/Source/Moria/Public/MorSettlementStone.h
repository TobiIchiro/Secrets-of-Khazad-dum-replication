#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESettlementType.h"
#include "MorConstructActionHandler.h"
#include "MorGenerationPatern.h"
#include "MorInteractable.h"
#include "MorPostActivateActorInitializer.h"
#include "MorSettlementLevelData.h"
#include "MorSettlementStoneActivatedDelegate.h"
#include "MorSettlementStoneActivityPointsGainedDelegate.h"
#include "MorSettlementStoneDeactivatedDelegate.h"
#include "MorSettlementStoneInteractedDelegate.h"
#include "MorSettlementStoneLevelUpDelegate.h"
#include "MorSettlementStoneLocallyInteractedDelegate.h"
#include "MorSettlementStoneReadyForLevelUpDelegate.h"
#include "MorSettlementStoneRenameRequestedLocalDelegate.h"
#include "MorSettlementStoneRequestDeconstructLocalDelegate.h"
#include "MorSettlementStoneRequestMoveDelegate.h"
#include "MorSongInstanceData.h"
#include "Templates/SubclassOf.h"
#include "MorSettlementStone.generated.h"

class AMorCharacter;
class AMorNPCManager;
class AMorSettlementManager;
class UGameplayAbility;
class UMorBreakableComponent;
class UMorNPCSettlementSpawnerComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorSettlementStone : public AMorInteractable, public IMorPostActivateActorInitializer, public IMorConstructActionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneActivated OnActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneDeactivated OnDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneInteracted OnInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneLocallyInteracted OnLocalInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneLevelUp OnLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneRequestDeconstructLocal OnRequestDeconstructLocal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneRequestMove OnRequestMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneRenameRequestedLocal OnRenameRequestedLocal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneReadyForLevelUp OnReadyForLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneReadyForLevelUp OnActivationSwapRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSettlementStoneActivityPointsGained OnActivityPointsGained;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSettlementManager* SettlementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorNPCManager* NpcManager;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_SettlementId, meta=(AllowPrivateAccess=true))
    uint32 SettlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SettlementLevelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FallbackSpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettlementType SettlementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> DecorVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettlementEnterRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettlementExitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettlementEnterDelayMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestLocalPlayerInSettlementDelaySeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Transient, ReplicatedUsing=OnRep_DecorVariantIndexList, meta=(AllowPrivateAccess=true))
    TArray<int32> DecorVariantIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> DecorMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> MeshStartIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorGenerationPatern> GenerationPaternByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNPCSettlementSpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableComponent* Breakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> StartSongAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bLevelUpSongActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyForLevelUp, meta=(AllowPrivateAccess=true))
    bool bReadyForLevelUp;
    
public:
    AMorSettlementStone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StoreActivityPoints(FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelUpSong();
    
    UFUNCTION(BlueprintCallable)
    void PreformMoveAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSingingDone(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
    UFUNCTION()
    void OnRep_SettlementId(uint32 OldSettlementId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyForLevelUp(bool bWasReadyForLevelUp);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DecorVariantIndexList();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBreak(bool bPreRuined);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_LevelUpEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void JoinSong(AMorCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSettlementName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSettlementLevelData GetCurrentLevelData() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSettlementName(FText Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelUp() const;
    

    // Fix for true pure virtual functions not being implemented
};

