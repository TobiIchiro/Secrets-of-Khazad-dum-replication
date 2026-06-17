#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKPlayerController.h"
#include "EFGKHudVisibility.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "EBubbleState.h"
#include "ELoadingScreenState.h"
#include "EMonumentType.h"
#include "EMorForceFeedBackType.h"
#include "EMorGoToMainMenuReason.h"
#include "EMorTeleportFailedReason.h"
#include "EMorTeleportType.h"
#include "LoadingScreenStateChangedSignatureDelegate.h"
#include "MorDamageMessage.h"
#include "MorHudInfo.h"
#include "MorLeaveGameParams.h"
#include "MorNPCConversationRowHandle.h"
#include "MorNPCRoleRowHandle.h"
#include "MorPlayerPermissionSet.h"
#include "MorPlayerProfileNetworkData.h"
#include "MorSaveGameObjectNative.h"
#include "MorSharedPlayerData.h"
#include "MorTrackedTutorials.h"
#include "MorUIScreenConfigRowHandle.h"
#include "MorWaypointData.h"
#include "MorZoomParams.h"
#include "MoriaControllerInterface.h"
#include "OnControllerTeleportFinishedDelegate.h"
#include "OnEmoteMenuFocusChangedDelegate.h"
#include "OnGUIDChangedDelegate.h"
#include "OnHUDActionBarFocusChangedDelegate.h"
#include "OnMorPlayerPawnChangedDelegate.h"
#include "OnMorPlayerPermissionChangedDelegate.h"
#include "ProxyLocator.h"
#include "Templates/SubclassOf.h"
#include "ZoomStartedSignatureDelegate.h"
#include "MorPlayerController.generated.h"

class AActor;
class ACharacter;
class AController;
class ADecalActor;
class AMorBed;
class AMorCharacter;
class AMorConstructionManager;
class AMorFreeCameraController;
class AMorOathRingInteractable;
class AMorPlayerController;
class UForceFeedbackEffect;
class UGameplayEffect;
class UMorAchievementComponent;
class UMorBubbleActivationPlayerController;
class UMorInventoryComponent;
class UMorLoadingScreen;
class UMorLoadingScreenManager;
class UMorNetBigDataPlayerComponent;
class UMorPlayerProfileDataComponent;
class UMorProcWorldRPCComponent;
class UMorRecipeCostComponent;
class UMorTipComponent;
class UObject;
class UReticleWidget;
class UUserWidget;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorPlayerController : public AFGKPlayerController, public IMoriaControllerInterface, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDActionBarFocusChanged OnHUDActionBarFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmoteMenuFocusChanged OnEmoteMenuFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoomStartedSignature OnZoomStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenStateChangedSignature OnLoadingScreenStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorLoadingScreen> LoadingScreenClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerTeleportFinished OnControllerTeleportFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectToApplyOnTeleporting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToEnemyToPreventTeleportation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KoolAidHitsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KoolAidCarveToolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorUIScreenConfigRowHandle UiEntitlementNotificationsRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorTrackedTutorials TrackedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorTrackedTutorials AllTrackedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Permissions, meta=(AllowPrivateAccess=true))
    FMorPlayerPermissionSet Permissions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMorPlayerPawnChanged OnMorPlayerPawnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMorPlayerPermissionChanged OnMorPlayerPermissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGUIDChanged OnGUIDChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBubbleActivationPlayerController* BubbleActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> HudWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorHudInfo> HudToggleWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> Huds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKey, UUserWidget*> ToggleHuds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReticleWidget> ReticleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReticleSurfaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DebugMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugMenuZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftClassPtr<AMorCharacter>> QuickSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FreeCameraMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorFreeCameraController* FreeCameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorLoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorPlayerProfileDataComponent* ProfileDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorTipComponent* TipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorAchievementComponent* AchievementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorProcWorldRPCComponent* ProcWorldRPCComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNetBigDataPlayerComponent* NetBigDataPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorRecipeCostComponent* RecipeCostComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector KoolAidPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReticleWidget* ReticleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReticleWidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadVibrationToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPlayerRestored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasBeenAddedToSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADecalActor> OreVisionDecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOreVisionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOreVisionDecalCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffects[13];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighResShotCooldownInSeconds;
    
public:
    AMorPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleFreeCamera();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartRitesSequence(AMorOathRingInteractable* OathRing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SpawnNpc(const TArray<FString>& Args) const;
    
    UFUNCTION(BlueprintCallable)
    void ServerZoomToActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerZoomTo(const FMorZoomParams& ZoomParams);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerVerifyReceivedHostLeft();
    
    UFUNCTION(Reliable, Server)
    void ServerSwapActivateSettlement(uint32 SettlementToActivate, uint32 SettlementToDeactivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSummonPlayer(const FString& PlayerName);
    
    UFUNCTION(Reliable, Server)
    void ServerStartSettlementLevelUpSong(uint32 SettlementId, AMorCharacter* MorCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnNpc(const FVector& OriginLocation, const FVector& SpawnCenterLocation, const TArray<FString>& Args) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerProfileNetworkData(const FMorPlayerProfileNetworkData& Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerGuid(const FGuid& InPlayerGuid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetExpeditionSelectionIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetConversationCompleted(FGuid ID, const FMorNPCConversationRowHandle& RowHandle) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendNpcToSettlement(FGuid NpcGuid, int32 SettlementWaypointID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendNpcBackToSettlement(FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSellOrder(int32 OrderId, UMorInventoryComponent* InventoryComponent);
    
    UFUNCTION(Reliable, Server)
    void ServerRescueNpc(FGuid NpcGuid, uint32 SettlementId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestStartPlaying();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestExpeditionTravel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestExpeditionEnd();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestCancelExpedition();
    
    UFUNCTION(Reliable, Server)
    void ServerRenameSettlement(uint32 SettlementId, const FText& NewName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerQuickSpawn(const FVector& OriginLocation, const FVector& SpawnCenterLocation, const TArray<FString>& Args) const;
    
    UFUNCTION(Reliable, Server)
    void ServerPreformSettlementMove(uint32 MoverSettlement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNpcSetRole(const FGuid& NpcId, const FMorNPCRoleRowHandle& NewRole) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNpcRemoveAllSkills(const TArray<FString>& Args) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNpcDeliverResearch(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNpcAddSkills(const TArray<FString>& Args) const;
    
    UFUNCTION(Reliable, Server)
    void ServerMoveNpc(const FGuid& NpcGuid, uint32 SettlementId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHandlePlayerLeavingGame(const FMorLeaveGameParams& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFreeNpcInExpedition(const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDismissNpc(FGuid NpcGuid);
    
    UFUNCTION(Reliable, Server)
    void ServerConfirmSettlementDeconstruct(uint32 SettlementId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConfirmMonumentBuildStart(EMonumentType MonumentType, ACharacter* Builder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBuyOffer(int32 OfferId, UMorInventoryComponent* InventoryComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAssignBed(AMorBed* Bed, FGuid NpcGuid);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAcknowledgeClientStartedPlaying();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleLoadingScreenStateChanged(ELoadingScreenState NewScreenState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendOathRingSummons();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RetractOathRingSummons();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestZoomToWaypoint(const FMorWaypointData& Waypoint, EMorTeleportType InTeleportType, bool bAbsoluteLocation);
    
    UFUNCTION(BlueprintCallable)
    bool RequestZoomToTeleportPad(const FProxyLocator& TeleportPadLocator, bool bAbsoluteLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestZoomToLocationV2(const FMorZoomParams& ZoomParams);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestZoomToLocation(FVector Location, EMorTeleportType InTeleportType, bool bAbsoluteLocation);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartPlaying();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDeconstruct(AActor* TargetedActor, AMorConstructionManager* ConstructionManager);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveGuidFromServerSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void QuickSpawn(const TArray<FString>& Args) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PopMessage_Client(const FText& Message, const FText& Title, float DisplayDuration);
    
    UFUNCTION(BlueprintCallable)
    void PlayForceFeedbackType(EMorForceFeedBackType ForceFeedBackType, float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void OnUIManagerChangingState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Permissions();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnPlayerRestored();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProfileClicked(const FMorSharedPlayerData& SelectedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerListChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageMessageReceived(const FMorDamageMessage& DamageMessage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void InformServerThatClientIsReadyToTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPreparedCharacter();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HandleRequestZoomToLocation(const FMorZoomParams& ZoomParams);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLoadingScreenStateChanged(ELoadingScreenState NewScreenState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMorPlayerController* GetLocalOrAnyPlayer(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMorPlayerController* GetFirstLocalPlayer(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetActiveHud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorAchievementComponent* GetAchievementComponent() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ForceClientToMenu(EMorGoToMainMenuReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AMorPlayerController* FindPlayerController(AController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableUiInputMode(UUserWidget* WidgetToFocus);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseUIScreen();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHint(const FGameplayTag Tag, const FText& Text);
    
    UFUNCTION(Client, Reliable)
    void ClientSettlementRenameRequested(uint32 SettlementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPlayerProfileNetworkData(const FMorPlayerProfileNetworkData& Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetOathCircleCutsceneHud(EFGKHudVisibility HudVisibility);
    
    UFUNCTION(Client, Reliable)
    void ClientRequestSwapActivateSettlement(uint32 SettlementToActivate);
    
    UFUNCTION(Client, Reliable)
    void ClientRequestSettlementMove(uint32 MoverSettlement);
    
    UFUNCTION(Client, Reliable)
    void ClientRequestSettlementDeconstructConfirmation(uint32 SettlementId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestMonumentBuildStart(EMonumentType MonumentType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotificationHostLeft();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandlePlayerLeavingGame(const FMorLeaveGameParams& Params);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCharacterTeleportFinished(AActor* TeleportedCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAcknowledgeServerStartedPlaying(bool bSpectate);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void Client_ReconnectToPragmaParty(const FString& InviteCode);
    
    UFUNCTION(BlueprintCallable)
    void CharacterTeleportFinished(AActor* TeleportedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorTeleportFailedReason CanZoom();
    
    UFUNCTION(BlueprintCallable)
    void CallEmote(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PopMessageOnClient(const FText& Message, const FText& Title, float DisplayDuration);
    
    UFUNCTION(BlueprintCallable)
    void AgenticFriendStart(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddAgenticFriend(int32 BotNumbers, bool bLocalFriends);
    
    UFUNCTION(BlueprintCallable)
    void ActivateHud(TSubclassOf<UUserWidget> HudClass, bool bFromInteract);
    

    // Fix for true pure virtual functions not being implemented
};

