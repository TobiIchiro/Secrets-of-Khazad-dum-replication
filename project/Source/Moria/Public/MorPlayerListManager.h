#pragma once
#include "CoreMinimal.h"
#include "MorPersistentPlayerIdentifier.h"
#include "MorReplicatedManager.h"
#include "MorSharedPlayerData.h"
#include "MorSharedPlayerDataArray.h"
#include "MorPlayerListManager.generated.h"

class AMorPlayerListManager;
class UMorBlockedPlayersManager;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorPlayerListManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerListChangedBp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDataChangedBp, const FMorSharedPlayerData&, PlayerData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerListChangedBp OnPlayerListChangedBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDataChangedBp OnPlayerAddedBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDataChangedBp OnPlayerRemovedBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDataChangedBp OnPlayerChangedBp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToDestroyRemovedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleOnPlayerListReplicated, meta=(AllowPrivateAccess=true))
    FMorSharedPlayerDataArray PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBlockedPlayersManager* BlockedPlayers;
    
public:
    AMorPlayerListManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorPersistentPlayerIdentifier ToPlayerIdentifier(const FMorSharedPlayerData& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalPlayerData(const FMorSharedPlayerData& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLocalPlatform(const FMorSharedPlayerData& PlayerData, const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostPlayerData(const FMorSharedPlayerData& PlayerData);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerListReplicated();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMorPlayerPermissionChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMorPlayerPawnChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnBlockedPlayerJoined(const FMorSharedPlayerData& PlayerData, bool bNewPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorSharedPlayerData> GetPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorSharedPlayerData GetPlayerDataRef(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPlatform(const FMorSharedPlayerData& PlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDwarfName(const FMorSharedPlayerData& PlayerData, const FString& Fallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMorPlayerListManager* Get(const UObject* WorldContext);
    
};

