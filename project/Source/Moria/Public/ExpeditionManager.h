#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMorExpeditionState.h"
#include "EZoneSet.h"
#include "ExpeditionEventDelegateDelegate.h"
#include "ExpeditionPlayerCountDelegateDelegate.h"
#include "ExpeditionSecondsCountDelegateDelegate.h"
#include "ExpeditionTableStateDelegateDelegate.h"
#include "MorExpeditionDataset.h"
#include "MorExpeditionModifierDefinition.h"
#include "MorExpeditionReturnConfig.h"
#include "MorProgressRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectNative.h"
#include "ExpeditionManager.generated.h"

class AMorMapTable;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AExpeditionManager : public AMorReplicatedManager, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ExpeditionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AMorMapTable* CurrentMapTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumberOfPlayersChanged, meta=(AllowPrivateAccess=true))
    int32 NumberOfReadyPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpeditionPlayerCountDelegate NumberOfReadyPlayersChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpeditionEventDelegate LocalPlayerIsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpeditionEventDelegate LocalPlayerNotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpeditionTableStateDelegate TableStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpeditionSecondsCountDelegate SecondsCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_RefreshExpeditionUI, meta=(AllowPrivateAccess=true))
    TArray<FMorExpeditionDataset> GeneratedExpeditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRequiredForRescueExpedition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRowForGrendelBossfight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRowForRingForge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGenerateRescueExpedition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGenerateGrendelExpedition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGenerateForgeExpedition;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 RingForgeExpeditionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAllBiasModifiers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfExpeditionsToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorExpeditionReturnConfig OnlinePlayersReturnConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorExpeditionReturnConfig OfflinePlayersReturnConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ExpeditionSelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMorExpeditionState ExpeditionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGuid> NpcsNeedingRescueInExpeditions;
    
public:
    AExpeditionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetExpeditionSelectionIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetExpeditionResourceBias(FMorExpeditionModifierDefinition OreDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetExpeditionEnemyBias(FMorExpeditionModifierDefinition EnemyBiasDefinition);
    
    UFUNCTION(BlueprintCallable)
    void RequestExpeditionBeginPreparing();
    
    UFUNCTION(BlueprintCallable)
    void RequestEndExpedition();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateExpeditions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RefreshExpeditionUI();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumberOfPlayersChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInExpedition(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfSecondsForReady();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfReadyPlayers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfRandomExpeditions();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMorExpeditionModifierDefinition> GetExpeditionEnemyBiasOptions();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMorExpeditionModifierDefinition> GetExpeditionBiasResources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZoneSet GetCurrentExpeditionZoneType() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelExpedition();
    

    // Fix for true pure virtual functions not being implemented
};

