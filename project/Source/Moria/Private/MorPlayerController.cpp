#include "MorPlayerController.h"
#include "MorAchievementComponent.h"
#include "MorBubbleActivationPlayerController.h"
#include "MorCheatManager.h"
#include "MorFreeCameraHUD.h"
#include "MorNetBigDataPlayerComponent.h"
#include "MorPlayerProfileDataComponent.h"
#include "MorProcWorldRPCComponent.h"
#include "MorRecipeCostComponent.h"
#include "MorTipComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMorPlayerController::AMorPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UMorCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->LoadingScreenClass = NULL;
    this->GameplayEffectToApplyOnTeleporting = NULL;
    this->DistanceToEnemyToPreventTeleportation = 1000.00f;
    this->KoolAidHitsToApply = 10;
    this->KoolAidCarveToolName = TEXT("Default");
    this->BubbleActivation = CreateDefaultSubobject<UMorBubbleActivationPlayerController>(TEXT("BubbleActivation"));
    this->ReticleWidgetClass = NULL;
    this->ReticleSurfaceOffset = 6.00f;
    this->DebugMenuClass = NULL;
    this->DebugMenuZOrder = 9999;
    this->DebugMenu = NULL;
    this->FreeCameraMenuClass = UMorFreeCameraHUD::StaticClass();
    this->FreeCameraController = NULL;
    this->LoadingScreenManager = NULL;
    this->ProfileDataComponent = CreateDefaultSubobject<UMorPlayerProfileDataComponent>(TEXT("CharacterSaveDataComponent"));
    this->TipComponent = CreateDefaultSubobject<UMorTipComponent>(TEXT("MorTipComponent"));
    this->AchievementComponent = CreateDefaultSubobject<UMorAchievementComponent>(TEXT("MorAchievementComponent"));
    this->ProcWorldRPCComponent = CreateDefaultSubobject<UMorProcWorldRPCComponent>(TEXT("ProcWorldRPCComponent"));
    this->NetBigDataPlayerComponent = CreateDefaultSubobject<UMorNetBigDataPlayerComponent>(TEXT("NetBigDataPlayerComponent"));
    this->RecipeCostComponent = CreateDefaultSubobject<UMorRecipeCostComponent>(TEXT("MorRecipeCostComponent"));
    this->ReticleWidget = NULL;
    this->ReticleWidgetZOrder = 0;
    this->bGamepadVibrationToggle = true;
    this->bPlayerRestored = false;
    this->bHasBeenAddedToSession = false;
    this->ActiveHud = NULL;
    this->OreVisionDecalClass = NULL;
    this->MaxOreVisionDist = 3000.00f;
    this->MaxOreVisionDecalCount = 25;
    this->ForceFeedbackEffects[0] = NULL;
    this->ForceFeedbackEffects[1] = NULL;
    this->ForceFeedbackEffects[2] = NULL;
    this->ForceFeedbackEffects[3] = NULL;
    this->ForceFeedbackEffects[4] = NULL;
    this->ForceFeedbackEffects[5] = NULL;
    this->ForceFeedbackEffects[6] = NULL;
    this->ForceFeedbackEffects[7] = NULL;
    this->ForceFeedbackEffects[8] = NULL;
    this->ForceFeedbackEffects[9] = NULL;
    this->ForceFeedbackEffects[10] = NULL;
    this->ForceFeedbackEffects[11] = NULL;
    this->ForceFeedbackEffects[12] = NULL;
    this->HighResShotCooldownInSeconds = 5.00f;
}

void AMorPlayerController::ToggleFreeCamera() {
}

void AMorPlayerController::StartRitesSequence_Implementation(AMorOathRingInteractable* OathRing) {
}

void AMorPlayerController::SpawnNpc(const TArray<FString>& Args) const {
}

void AMorPlayerController::ServerZoomToActor(AActor* TargetActor) {
}

void AMorPlayerController::ServerZoomTo_Implementation(const FMorZoomParams& ZoomParams) {
}
bool AMorPlayerController::ServerZoomTo_Validate(const FMorZoomParams& ZoomParams) {
    return true;
}

void AMorPlayerController::ServerVerifyReceivedHostLeft_Implementation() {
}

void AMorPlayerController::ServerSwapActivateSettlement_Implementation(uint32 SettlementToActivate, uint32 SettlementToDeactivate) {
}

void AMorPlayerController::ServerSummonPlayer_Implementation(const FString& PlayerName) {
}

void AMorPlayerController::ServerStartSettlementLevelUpSong_Implementation(uint32 SettlementId, AMorCharacter* MorCharacter) {
}

void AMorPlayerController::ServerSpawnNpc_Implementation(const FVector& OriginLocation, const FVector& SpawnCenterLocation, const TArray<FString>& Args) const {
}

void AMorPlayerController::ServerSetPlayerProfileNetworkData_Implementation(const FMorPlayerProfileNetworkData& Data) {
}

void AMorPlayerController::ServerSetPlayerGuid_Implementation(const FGuid& InPlayerGuid) {
}

void AMorPlayerController::ServerSetExpeditionSelectionIndex_Implementation(int32 NewIndex) {
}

void AMorPlayerController::ServerSetConversationCompleted_Implementation(FGuid ID, const FMorNPCConversationRowHandle& RowHandle) const {
}

void AMorPlayerController::ServerSendNpcToSettlement_Implementation(FGuid NpcGuid, int32 SettlementWaypointID) {
}

void AMorPlayerController::ServerSendNpcBackToSettlement_Implementation(FGuid NpcGuid) {
}

void AMorPlayerController::ServerSellOrder_Implementation(int32 OrderId, UMorInventoryComponent* InventoryComponent) {
}

void AMorPlayerController::ServerRescueNpc_Implementation(FGuid NpcGuid, uint32 SettlementId) {
}

void AMorPlayerController::ServerRequestStartPlaying_Implementation() {
}

void AMorPlayerController::ServerRequestExpeditionTravel_Implementation() {
}

void AMorPlayerController::ServerRequestExpeditionEnd_Implementation() {
}

void AMorPlayerController::ServerRequestCancelExpedition_Implementation() {
}

void AMorPlayerController::ServerRenameSettlement_Implementation(uint32 SettlementId, const FText& NewName) {
}

void AMorPlayerController::ServerQuickSpawn_Implementation(const FVector& OriginLocation, const FVector& SpawnCenterLocation, const TArray<FString>& Args) const {
}

void AMorPlayerController::ServerPreformSettlementMove_Implementation(uint32 MoverSettlement) {
}

void AMorPlayerController::ServerNpcSetRole_Implementation(const FGuid& NpcId, const FMorNPCRoleRowHandle& NewRole) const {
}

void AMorPlayerController::ServerNpcRemoveAllSkills_Implementation(const TArray<FString>& Args) const {
}

void AMorPlayerController::ServerNpcDeliverResearch_Implementation(FGuid Guid) {
}

void AMorPlayerController::ServerNpcAddSkills_Implementation(const TArray<FString>& Args) const {
}

void AMorPlayerController::ServerMoveNpc_Implementation(const FGuid& NpcGuid, uint32 SettlementId) {
}

void AMorPlayerController::ServerHandlePlayerLeavingGame_Implementation(const FMorLeaveGameParams& Params) {
}

void AMorPlayerController::ServerFreeNpcInExpedition_Implementation(const FGuid& Guid) {
}

void AMorPlayerController::ServerDismissNpc_Implementation(FGuid NpcGuid) {
}

void AMorPlayerController::ServerConfirmSettlementDeconstruct_Implementation(uint32 SettlementId) {
}

void AMorPlayerController::ServerConfirmMonumentBuildStart_Implementation(EMonumentType MonumentType, ACharacter* Builder) {
}

void AMorPlayerController::ServerBuyOffer_Implementation(int32 OfferId, UMorInventoryComponent* InventoryComponent) {
}

void AMorPlayerController::ServerAssignBed_Implementation(AMorBed* Bed, FGuid NpcGuid) {
}

void AMorPlayerController::ServerAcknowledgeClientStartedPlaying_Implementation() {
}

void AMorPlayerController::Server_HandleLoadingScreenStateChanged_Implementation(ELoadingScreenState NewScreenState) {
}

void AMorPlayerController::SendOathRingSummons_Implementation() {
}

void AMorPlayerController::RetractOathRingSummons_Implementation() {
}

void AMorPlayerController::RequestZoomToWaypoint_Implementation(const FMorWaypointData& Waypoint, EMorTeleportType InTeleportType, bool bAbsoluteLocation) {
}

bool AMorPlayerController::RequestZoomToTeleportPad(const FProxyLocator& TeleportPadLocator, bool bAbsoluteLocation) {
    return false;
}

void AMorPlayerController::RequestZoomToLocationV2_Implementation(const FMorZoomParams& ZoomParams) {
}

void AMorPlayerController::RequestZoomToLocation_Implementation(FVector Location, EMorTeleportType InTeleportType, bool bAbsoluteLocation) {
}

void AMorPlayerController::RequestStartPlaying() {
}

void AMorPlayerController::RequestDeconstruct_Implementation(AActor* TargetedActor, AMorConstructionManager* ConstructionManager) {
}

void AMorPlayerController::RemoveGuidFromServerSession_Implementation() {
}

void AMorPlayerController::QuickSpawn(const TArray<FString>& Args) const {
}

void AMorPlayerController::PopMessage_Client_Implementation(const FText& Message, const FText& Title, float DisplayDuration) {
}

void AMorPlayerController::PlayForceFeedbackType(EMorForceFeedBackType ForceFeedBackType, float Intensity) {
}

void AMorPlayerController::OnUIManagerChangingState() {
}

void AMorPlayerController::OnRep_Permissions() {
}

void AMorPlayerController::OnPlayerRestored_Implementation() {
}

void AMorPlayerController::OnPlayerProfileClicked(const FMorSharedPlayerData& SelectedPlayer) {
}

void AMorPlayerController::OnPlayerListChanged() {
}

void AMorPlayerController::OnDamageMessageReceived(const FMorDamageMessage& DamageMessage) {
}

void AMorPlayerController::InformServerThatClientIsReadyToTeleport_Implementation() {
}

bool AMorPlayerController::HasPreparedCharacter() {
    return false;
}

void AMorPlayerController::HandleRequestZoomToLocation_Implementation(const FMorZoomParams& ZoomParams) {
}

void AMorPlayerController::HandleLoadingScreenStateChanged(ELoadingScreenState NewScreenState) {
}

AMorPlayerController* AMorPlayerController::GetLocalOrAnyPlayer(const UObject* WorldContext) {
    return NULL;
}

AMorPlayerController* AMorPlayerController::GetFirstLocalPlayer(const UObject* WorldContext) {
    return NULL;
}

UUserWidget* AMorPlayerController::GetActiveHud() const {
    return NULL;
}

UMorAchievementComponent* AMorPlayerController::GetAchievementComponent() const {
    return NULL;
}

void AMorPlayerController::ForceClientToMenu_Implementation(EMorGoToMainMenuReason Reason) {
}

AMorPlayerController* AMorPlayerController::FindPlayerController(AController* Controller) {
    return NULL;
}

void AMorPlayerController::EnableUiInputMode(UUserWidget* WidgetToFocus) {
}

void AMorPlayerController::CloseUIScreen() {
}

void AMorPlayerController::ClientShowHint_Implementation(const FGameplayTag Tag, const FText& Text) {
}

void AMorPlayerController::ClientSettlementRenameRequested_Implementation(uint32 SettlementId) {
}

void AMorPlayerController::ClientSetPlayerProfileNetworkData_Implementation(const FMorPlayerProfileNetworkData& Data) {
}

void AMorPlayerController::ClientSetOathCircleCutsceneHud_Implementation(EFGKHudVisibility HudVisibility) {
}

void AMorPlayerController::ClientRequestSwapActivateSettlement_Implementation(uint32 SettlementToActivate) {
}

void AMorPlayerController::ClientRequestSettlementMove_Implementation(uint32 MoverSettlement) {
}

void AMorPlayerController::ClientRequestSettlementDeconstructConfirmation_Implementation(uint32 SettlementId) {
}

void AMorPlayerController::ClientRequestMonumentBuildStart_Implementation(EMonumentType MonumentType) {
}

void AMorPlayerController::ClientNotificationHostLeft_Implementation() {
}

void AMorPlayerController::ClientHandlePlayerLeavingGame_Implementation(const FMorLeaveGameParams& Params) {
}

void AMorPlayerController::ClientCharacterTeleportFinished_Implementation(AActor* TeleportedCharacter) {
}

void AMorPlayerController::ClientAcknowledgeServerStartedPlaying_Implementation(bool bSpectate) {
}

void AMorPlayerController::Client_ReconnectToPragmaParty_Implementation(const FString& InviteCode) {
}
bool AMorPlayerController::Client_ReconnectToPragmaParty_Validate(const FString& InviteCode) {
    return true;
}

void AMorPlayerController::CharacterTeleportFinished(AActor* TeleportedCharacter) {
}

EMorTeleportFailedReason AMorPlayerController::CanZoom() {
    return EMorTeleportFailedReason::None;
}

void AMorPlayerController::CallEmote(int32 Index) {
}


void AMorPlayerController::AgenticFriendStart(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

void AMorPlayerController::AddAgenticFriend(int32 BotNumbers, bool bLocalFriends) {
}

void AMorPlayerController::ActivateHud(TSubclassOf<UUserWidget> HudClass, bool bFromInteract) {
}

void AMorPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorPlayerController, TrackedTutorials);
    DOREPLIFETIME(AMorPlayerController, AllTrackedTutorials);
    DOREPLIFETIME(AMorPlayerController, Permissions);
    DOREPLIFETIME(AMorPlayerController, bPlayerRestored);
    DOREPLIFETIME(AMorPlayerController, bHasBeenAddedToSession);
}


