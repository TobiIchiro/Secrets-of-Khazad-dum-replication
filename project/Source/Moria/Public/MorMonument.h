#pragma once
#include "CoreMinimal.h"
#include "InventoryQueryInterface.h"
#include "EMonumentType.h"
#include "MorBuilderStageSlots.h"
#include "MorConstructActionHandler.h"
#include "MorInteractable.h"
#include "MorMonumentConfirmBuildStartLocalDelegate.h"
#include "MorMonumentOnFullyBuiltDelegate.h"
#include "MorMonumentOnMonumentDataUpdatedDelegate.h"
#include "MorMonumentWorkTimeEstimate.h"
#include "MorPostActivateActorInitializer.h"
#include "MorSongInstanceData.h"
#include "Templates/SubclassOf.h"
#include "MorMonument.generated.h"

class AMorSettlementManager;
class UEquipComponent;
class UFGKFilteredInventoryComponent;
class UGameplayAbility;
class UInventoryComponent;
class UMorBreakableComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorMonument : public AMorInteractable, public IInventoryQueryInterface, public IMorPostActivateActorInitializer, public IMorConstructActionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMonumentOnMonumentDataUpdated OnDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMonumentConfirmBuildStartLocal OnBuildStartRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMonumentOnFullyBuilt OnFullyBuilt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKFilteredInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MonumentMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBuilderStageSlots> BuilderSlotsPerStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> StartSongAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveBuildersCount, meta=(AllowPrivateAccess=true))
    int32 ActiveBuildersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableComponent* Breakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonumentType MonumentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorSettlementManager* SettlementManager;
    
public:
    AMorMonument(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAllBuilderSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnSingingDone(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveBuildersCount();
    
    UFUNCTION(BlueprintCallable)
    void OnBreak(bool bPreRuined);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevealStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonumentSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRevealStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FMorMonumentWorkTimeEstimate GetWorkTimeEstimate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMonumentType GetMonumentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBuildStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildStagesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuildStageProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddBuilderSlots(TArray<USceneComponent*> SlotPositions);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
};

