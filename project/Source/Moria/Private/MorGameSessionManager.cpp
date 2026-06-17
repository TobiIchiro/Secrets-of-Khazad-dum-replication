#include "MorGameSessionManager.h"

UMorGameSessionManager::UMorGameSessionManager() {
    this->AcceptedOnlineSubsystems.AddDefaulted(4);
    this->bAllowSearchingForGames = false;
    this->bLockMultiplayerGamesToSameVersion = true;
    this->DefaultOnlineSubsystemName = TEXT("EOS");
    this->CrossplayOnlineSubsystemName = TEXT("EOS");
    this->OssLoginTimeout = 30.00f;
    this->MinDelayToAutomaticRelogin = 60.00f;
    this->HostGameTimeout = 10.00f;
    this->HostStatus = EPlayerHostStatus::NotHosting;
    this->OssJoinSessionTimeout = 60.00f;
    this->PSSubscriptionHeartbeatFrequency = 60.00f;
    this->MaxConnectionHistoryCount = 5;
}

void UMorGameSessionManager::ValidatePlayerReport(FMorPlayerReport& PlayerReport) const {
}

bool UMorGameSessionManager::TryShowAccountUpgradeUI() const {
    return false;
}

void UMorGameSessionManager::TeardownPreparedSession() {
}

void UMorGameSessionManager::StartActivity(const FString& ActivityID) {
}

void UMorGameSessionManager::ShowAccountUpgradeUI() const {
}

bool UMorGameSessionManager::ShouldRetryOssAuthentication() const {
    return false;
}

void UMorGameSessionManager::SetActivityAvailability(const FString& ActivityID, bool bActive) {
}

void UMorGameSessionManager::SendPlayerReport(const FMorPlayerReport& PlayerReport, FOnPlayerReportCompletedDynamic OnCompleted) {
}

void UMorGameSessionManager::RetryPragmaAuthentication(FOnAuthCompleted OnCompleteDelegate) {
}

void UMorGameSessionManager::RetryOssAuthentication(FOnAuthCompleted OnCompleteDelegate) {
}

void UMorGameSessionManager::ResetGameConfig() {
}

EOnlineNetworkStatus UMorGameSessionManager::ReadAndResetNetworkStatus() {
    return EOnlineNetworkStatus::Active;
}

void UMorGameSessionManager::LeaveGameGoToMenu(EMorGoToMainMenuReason GoToMenuReason) {
}

void UMorGameSessionManager::LeaveGameFullQuit() {
}

void UMorGameSessionManager::LeaveCurrentGameToGoToJoinFriendsGame() {
}

bool UMorGameSessionManager::JoinSession(const FString& InviteCode) {
    return false;
}

void UMorGameSessionManager::JoinPreparedSessionWithPassword(const FString& OptionalPassword) {
}

void UMorGameSessionManager::JoinPreparedSession() {
}

bool UMorGameSessionManager::IsSessionPendingDestroy() const {
    return false;
}

bool UMorGameSessionManager::IsPragmaAuthenticated() const {
    return false;
}

bool UMorGameSessionManager::IsOssAuthenticated() const {
    return false;
}

bool UMorGameSessionManager::IsJoiningGameFromFriendsList() const {
    return false;
}

bool UMorGameSessionManager::HasServerRulesText() const {
    return false;
}

bool UMorGameSessionManager::HasRestrictedPermissions() const {
    return false;
}

bool UMorGameSessionManager::HasCustomJoinOptionalEntitlements() const {
    return false;
}

void UMorGameSessionManager::HandleOnOssSessionDestroyed() {
}

void UMorGameSessionManager::HandleOnOnJoiningGameFromFriendsList() {
}

void UMorGameSessionManager::HandleOnMultiplayerSessionModeChanged(EMorMultiplayerSessionMode NewMode) {
}

void UMorGameSessionManager::HandleOnJoinGameStatusChanged(EPlayerJoinStatus InJoinStatus, EPlayerJoinFailReason InFailReason) {
}

void UMorGameSessionManager::HandleOnAuthCompletedToRefreshConnectLogin(bool bIsSuccessful, ELoginFailedReason Reason, EMorOssLoginFailedReason OssReason) {
}

void UMorGameSessionManager::HandleOnActiveOssHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason) {
}

int32 UMorGameSessionManager::GetUnpreparedClientsNum() const {
    return 0;
}


ESessionJoinMethod UMorGameSessionManager::GetSessionJoinMethod() const {
    return ESessionJoinMethod::Manual;
}

FText UMorGameSessionManager::GetServerRulesText() const {
    return FText::GetEmpty();
}

void UMorGameSessionManager::GetPlayerNatType(FOnNatTypeRetrieved OnNatTypeRetrieved) {
}

FMorPlayerPermissionSet UMorGameSessionManager::GetPermissions() const {
    return FMorPlayerPermissionSet{};
}

FMorNetUserId UMorGameSessionManager::GetNetUserIdToReport(const FMorSharedPlayerData& PlayerData) const {
    return FMorNetUserId{};
}

EPlayerLoginStatus UMorGameSessionManager::GetLoginStatus() const {
    return EPlayerLoginStatus::NotStarted;
}

EPlayerJoinStatus UMorGameSessionManager::GetJoinStatus() const {
    return EPlayerJoinStatus::NotJoining;
}

bool UMorGameSessionManager::GetJoinSessionOptionalEntitlements(FMorWorldLayoutConfigOptionalEntitlements& OutEntitlements) const {
    return false;
}

bool UMorGameSessionManager::GetJoinSessionMissingOptionalEntitlements(FMorWorldLayoutConfigOptionalEntitlements& OutEntitlements) const {
    return false;
}

bool UMorGameSessionManager::GetInviteCodeFromFriendsListJoinGame(FString& OutInviteCode) const {
    return false;
}


FString UMorGameSessionManager::GetGameVersion() const {
    return TEXT("");
}

bool UMorGameSessionManager::GetGameFromFriendsListWorldName(FString& WorldName) {
    return false;
}

FMorWorldLayoutConfigOptionalEntitlements UMorGameSessionManager::GetCustomJoinOptionalEntitlements() const {
    return FMorWorldLayoutConfigOptionalEntitlements{};
}

void UMorGameSessionManager::GetCurrentSesionMode(EMorMultiplayerSessionMode& OutSessionMode, bool& OutIsMultiplayer) const {
}

bool UMorGameSessionManager::GetCurrentMultiplayerGameInviteCode(FString& OutInviteCode) {
    return false;
}

TArray<FMorConnectionHistoryItem> UMorGameSessionManager::GetConnectionHistory() const {
    return TArray<FMorConnectionHistoryItem>();
}

UMorGameSessionManager* UMorGameSessionManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UMorGameSessionManager::FinishConnectingToServer() {
}

void UMorGameSessionManager::EndActivity(const FString& ActivityID) {
}

void UMorGameSessionManager::DirectJoinSessionWithPassword(const FString& HostAndOptionalPort, const FString& OptionalPassword) {
}

void UMorGameSessionManager::DirectJoinLocalSessionWithPassword(const FString& PortString, const FString& OptionalPassword) {
}

void UMorGameSessionManager::ClearJoiningGameFromFriendsList() {
}

bool UMorGameSessionManager::CheckSessionOptionalEntitlementsOwnership() const {
    return false;
}

void UMorGameSessionManager::CheckPrivilege(EMorUserPrivileges Privilege) {
}

void UMorGameSessionManager::CheckPremiumSubscription() {
}

bool UMorGameSessionManager::CanLaunchNewGame() const {
    return false;
}

void UMorGameSessionManager::CancelJoinByPlayer() {
}

bool UMorGameSessionManager::ArePreconnectMessagesReadyToDisplay() const {
    return false;
}


