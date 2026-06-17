#pragma once
#include "CoreMinimal.h"
#include "AkExternalSourceInfo.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "CellGameplayData.h"
#include "EMorGameModeFlags.h"
#include "EMorMusic.h"
#include "EMoriaTeam.h"
#include "MoriaDamageEvent.h"
#include "Templates/SubclassOf.h"
#include "MoriaUtils.generated.h"

class AActor;
class ACharacter;
class AMorCharacter;
class AMorDiscoveryManager;
class AMorNPCManager;
class AMorPlayerController;
class AMorSettlementManager;
class AMoriaGameState;
class APawn;
class ASleepManager;
class ATimeManager;
class AWorldLayout;
class UActorComponent;
class UAkAudioEvent;
class UAkComponent;
class UMorBubbleCatalog;
class UObject;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API UMoriaUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMoriaUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorInBubble(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimerHandle ScheduleEvent(FTimerDynamicDelegate Event, float Delay, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector RoundCellPosition(const FVector& CellCoords);
    
    UFUNCTION(BlueprintCallable)
    static bool RotateActorAroundPivot(AActor* Actor, const FVector& Pivot, const FRotator& Rotation, bool bTeleportPhysics, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostMusicEventFromActor(EMorMusic MusicType, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static int32 PostMusicEventAndWaitForEnd(EMorMusic MusicType, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostMusicEvent(EMorMusic MusicType, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void KillOrDestroyActor(AActor* Target, const FMoriaDamageEvent& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamDeck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingOrTestBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSandbox(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorDead(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAcceptableGameMode(const UObject* WorldContextObject, EMorGameModeFlags AcceptableGameModes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetZoneForPlayer(const UObject* WorldContextObject, ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AWorldLayout* GetWorldLayout(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush GetWaypointWorldIcon(const UObject* WorldContextObject, FName IconName, FGameplayTag LandmarkId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush GetWaypointMapIcon(const UObject* WorldContextObject, FName IconName, FGameplayTag LandmarkId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetTotalPlayerCountIncludingConnecting(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATimeManager* GetTimeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetStationaryActorOfClassInSameBubble(const AActor* BubbleActor, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASleepManager* GetSleepManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorSettlementManager* GetSettlementManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayersInBubble(const UObject* WorldContextObject, UWorldLayoutBubble* Bubble, TArray<ACharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetPlayerCountFactor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString GetPlatformAccountDisplayName(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorNPCManager* GetNpcManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMoriaGameState* GetMoriaGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetManager(const UObject* WorldContextObject, const TSubclassOf<AActor> ManagerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FGuid GetLocalPlayerGuid(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEpicAccountId();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorDiscoveryManager* GetDiscoveryManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDepthFloat(const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDepth(const FVector& Position);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorCharacter* GetClosestLivePlayer(const UObject* WorldContextObject, FVector TestLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetClassDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCellGameplayData GetCellGameplayDataForActor(const UObject* WorldContextObject, const AActor* Actor, const bool bWarnOnInvalidData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FCellGameplayData GetCellGameplayData(const UObject* WorldContextObject, const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWorldLayoutBubble* GetBubbleForPlayer(const UObject* WorldContextObject, ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMorBubbleCatalog* GetBubbleCatalog(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllStationaryActorsOfClassInSameBubble(const AActor* BubbleActor, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayerControllers(const UObject* WorldContextObject, TArray<AMorPlayerController*>& OutPlayerControllers);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<AMorCharacter*>& OutCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> GetAllChildrenOfClass(UClass* ParentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMoriaTeam GetActorTeam(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* FindComponentByName(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesActorShareBubbleWithPlayer(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& TextToCopy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearTimer(UPARAM(Ref) FTimerHandle& Timer, const UObject* WorldContextObject);
    
};

