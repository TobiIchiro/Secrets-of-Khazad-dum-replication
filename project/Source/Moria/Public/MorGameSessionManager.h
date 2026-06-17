#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EHostGameFailedReason.h"
#include "ELoginFailedReason.h"
#include "EMorGoToMainMenuReason.h"
#include "EMorMultiplayerSessionMode.h"
#include "EMorOssLoginFailedReason.h"
#include "EMorUserPrivileges.h"
#include "EOnlineNetworkStatus.h"
#include "EPlayerHostStatus.h"
#include "EPlayerJoinFailReason.h"
#include "EPlayerJoinStatus.h"
#include "EPlayerLoginStatus.h"
#include "ESessionJoinMethod.h"
#include "MorConnectionHistoryItem.h"
#include "MorNetUserId.h"
#include "MorPlayerPermissionSet.h"
#include "MorPlayerReport.h"
#include "MorSharedPlayerData.h"
#include "MorWorldLayoutConfigOptionalEntitlements.h"
#include "OnAuthCompletedDelegate.h"
#include "OnFeatureFlagsReadyDelegate.h"
#include "OnHostGameStatusChangedDelegate.h"
#include "OnInviteCodeChangedDelegate.h"
#include "OnJoinGameStatusChangedDelegate.h"
#include "OnJoiningGameFromFriendsListDelegate.h"
#include "OnNatTypeRetrievedDelegate.h"
#include "OnPartyRestoreFailureDelegate.h"
#include "OnPermissionDeniedDelegate.h"
#include "OnPlayerJoinFailFromPasswordDelegate.h"
#include "OnPlayerLoginStatusChangedDelegate.h"
#include "OnPlayerReportCompletedDynamicDelegate.h"
#include "OnPreconnectMessagesReadyDelegate.h"
#include "OnPremiumSubscriptionCheckedDelegate.h"
#include "OnPrivilegeCheckedDelegate.h"
#include "OnSessionDestroyedDelegate.h"
#include "OnSessionSearchFailureDelegate.h"
#include "OnSessionSearchSuccessDelegate.h"
#include "MorGameSessionManager.generated.h"

class UMorGameSessionManager;

UCLASS(Blueprintable, Config=Engine)
class MORIA_API UMorGameSessionManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPermissionDenied OnPermissionDenied;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AcceptedOnlineSubsystems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSearchingForGames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockMultiplayerGamesToSameVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultOnlineSubsystemName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrossplayOnlineSubsystemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NativeOnlineSubsystemName;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoginStatusChanged OnPlayerLoginStatusChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OssLoginTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayToAutomaticRelogin;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFeatureFlagsReady OnFeatureFlagsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHostGameStatusChanged OnHostGameStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostGameTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerHostStatus HostStatus;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OssJoinSessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PSSubscriptionHeartbeatFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConnectionHistoryCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinGameStatusChanged OnJoinGameStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinFailFromPassword OnPlayerJoinFailFromPassword;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoiningGameFromFriendsList OnJoiningGameFromFriendsList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchSuccess OnSessionSearchSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionSearchFailure OnSessionSearchFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreconnectMessagesReady OnPreconnectMessagesReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPremiumSubscriptionChecked OnPremiumSubscriptionChecked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrivilegeChecked OnPrivilegeChecked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInviteCodeChanged OnInviteCodeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyRestoreFailure OnPartyRestoreFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDestroyed OnSessionDestroyed;
    
    UMorGameSessionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ValidatePlayerReport(FMorPlayerReport& PlayerReport) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TryShowAccountUpgradeUI() const;
    
    UFUNCTION(BlueprintCallable)
    void TeardownPreparedSession();
    
    UFUNCTION(BlueprintCallable)
    void StartActivity(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowAccountUpgradeUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRetryOssAuthentication() const;
    
    UFUNCTION(BlueprintCallable)
    void SetActivityAvailability(const FString& ActivityID, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SendPlayerReport(const FMorPlayerReport& PlayerReport, FOnPlayerReportCompletedDynamic OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void RetryPragmaAuthentication(FOnAuthCompleted OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RetryOssAuthentication(FOnAuthCompleted OnCompleteDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetGameConfig();
    
public:
    UFUNCTION(BlueprintCallable)
    EOnlineNetworkStatus ReadAndResetNetworkStatus();
    
    UFUNCTION(BlueprintCallable)
    void LeaveGameGoToMenu(EMorGoToMainMenuReason GoToMenuReason);
    
    UFUNCTION(BlueprintCallable)
    void LeaveGameFullQuit();
    
    UFUNCTION(BlueprintCallable)
    void LeaveCurrentGameToGoToJoinFriendsGame();
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(const FString& InviteCode);
    
    UFUNCTION(BlueprintCallable)
    void JoinPreparedSessionWithPassword(const FString& OptionalPassword);
    
    UFUNCTION(BlueprintCallable)
    void JoinPreparedSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionPendingDestroy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPragmaAuthenticated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOssAuthenticated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningGameFromFriendsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasServerRulesText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRestrictedPermissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomJoinOptionalEntitlements() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnOssSessionDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnOnJoiningGameFromFriendsList();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMultiplayerSessionModeChanged(EMorMultiplayerSessionMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnJoinGameStatusChanged(EPlayerJoinStatus InJoinStatus, EPlayerJoinFailReason InFailReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnAuthCompletedToRefreshConnectLogin(bool bIsSuccessful, ELoginFailedReason Reason, EMorOssLoginFailedReason OssReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnActiveOssHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnpreparedClientsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText GetStatusTextFromType(const EPlayerJoinFailReason& TypeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESessionJoinMethod GetSessionJoinMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetServerRulesText() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerNatType(FOnNatTypeRetrieved OnNatTypeRetrieved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorPlayerPermissionSet GetPermissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorNetUserId GetNetUserIdToReport(const FMorSharedPlayerData& PlayerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerLoginStatus GetLoginStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerJoinStatus GetJoinStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJoinSessionOptionalEntitlements(FMorWorldLayoutConfigOptionalEntitlements& OutEntitlements) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJoinSessionMissingOptionalEntitlements(FMorWorldLayoutConfigOptionalEntitlements& OutEntitlements) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInviteCodeFromFriendsListJoinGame(FString& OutInviteCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInviteCodeChangedMessage(bool bGeneratedNewInviteCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameVersion() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetGameFromFriendsListWorldName(FString& WorldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorWorldLayoutConfigOptionalEntitlements GetCustomJoinOptionalEntitlements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentSesionMode(EMorMultiplayerSessionMode& OutSessionMode, bool& OutIsMultiplayer) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentMultiplayerGameInviteCode(FString& OutInviteCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorConnectionHistoryItem> GetConnectionHistory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMorGameSessionManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FinishConnectingToServer();
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable)
    void DirectJoinSessionWithPassword(const FString& HostAndOptionalPort, const FString& OptionalPassword);
    
    UFUNCTION(BlueprintCallable)
    void DirectJoinLocalSessionWithPassword(const FString& PortString, const FString& OptionalPassword);
    
    UFUNCTION(BlueprintCallable)
    void ClearJoiningGameFromFriendsList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSessionOptionalEntitlementsOwnership() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckPrivilege(EMorUserPrivileges Privilege);
    
    UFUNCTION(BlueprintCallable)
    void CheckPremiumSubscription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchNewGame() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelJoinByPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArePreconnectMessagesReadyToDisplay() const;
    

    // Fix for true pure virtual functions not being implemented
};

