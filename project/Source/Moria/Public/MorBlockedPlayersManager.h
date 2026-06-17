#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EHostGameFailedReason.h"
#include "EMorPlayerBlockMode.h"
#include "EMorRemovePlayerResult.h"
#include "EMorSaveBlockedPlayerResult.h"
#include "EPlayerHostStatus.h"
#include "EPlayerJoinFailReason.h"
#include "EPlayerJoinStatus.h"
#include "MorPersistentPlayerIdentifier.h"
#include "MorPlayerPermissionSet.h"
#include "MorSharedPlayerData.h"
#include "Templates/SubclassOf.h"
#include "MorBlockedPlayersManager.generated.h"

class APlayerController;
class UMorBlockedPlayersList;
class UMorBlockedPlayersListKicked;
class UMorBlockedPlayersManager;
class UMorFriendsPlayerBlockList;
class UMorGameSessionManager;

UCLASS(Blueprintable, Config=Engine)
class MORIA_API UMorBlockedPlayersManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlockedPlayersChangedDynamic);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockedPlayersChangedDynamic OnBlockedPlayersChangedDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorBlockedPlayersList> GlobalBlockedPlayersListClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorBlockedPlayersList> DedicatedServerBlockedPlayersListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* GameSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBlockedPlayersList* GlobalBlockedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorFriendsPlayerBlockList* FriendsBlockedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBlockedPlayersListKicked* KickedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBlockingEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanKickPlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseFriendsBlockList: 1;
    
public:
    UMorBlockedPlayersManager();

    UFUNCTION(BlueprintCallable)
    void UnblockPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, EMorSaveBlockedPlayerResult& OutSavedResult);
    
    UFUNCTION(BlueprintCallable)
    EMorSaveBlockedPlayerResult SetPermissions(const FMorPersistentPlayerIdentifier& PlayerIdentifier, bool bOverrideDefaults, const FMorPlayerPermissionSet& Permissions);
    
    UFUNCTION(BlueprintCallable)
    EMorSaveBlockedPlayerResult SetDefaultPermissions(const FMorPlayerPermissionSet& Permissions);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, APlayerController* PlayerController, EMorRemovePlayerResult& OutRemoveResult, EMorSaveBlockedPlayerResult& OutSavedResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBlocked(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnJoinGameStatusChanged(EPlayerJoinStatus JoinStatus, EPlayerJoinFailReason FailReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorPlayerPermissionSet GetPlayerPermissions(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorPersistentPlayerIdentifier GetPlayerIdentifier(const FMorSharedPlayerData& SharedPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* GetPlayerController(const FMorSharedPlayerData& SharedPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorPlayerBlockMode GetPlayerBlockMode(const FMorPersistentPlayerIdentifier& PlayerIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPlatform(const FMorPersistentPlayerIdentifier& PlayerIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorPlayerPermissionSet GetDefaultPermissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorBlockedPlayersManager* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, APlayerController* OptionalPlayerController, EMorRemovePlayerResult& OutRemoveResult, EMorSaveBlockedPlayerResult& OutSavedResult);
    

    // Fix for true pure virtual functions not being implemented
};

