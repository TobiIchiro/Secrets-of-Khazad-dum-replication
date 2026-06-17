#include "MoriaUtils.h"
#include "Templates/SubclassOf.h"

UMoriaUtils::UMoriaUtils() {
}

AActor* UMoriaUtils::SpawnActorInBubble(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator) {
    return NULL;
}

FTimerHandle UMoriaUtils::ScheduleEvent(FTimerDynamicDelegate Event, float Delay, const UObject* WorldContextObject) {
    return FTimerHandle{};
}

FIntVector UMoriaUtils::RoundCellPosition(const FVector& CellCoords) {
    return FIntVector{};
}

bool UMoriaUtils::RotateActorAroundPivot(AActor* Actor, const FVector& Pivot, const FRotator& Rotation, bool bTeleportPhysics, bool bForce) {
    return false;
}

int32 UMoriaUtils::PostMusicEventFromActor(EMorMusic MusicType, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

int32 UMoriaUtils::PostMusicEventAndWaitForEnd(EMorMusic MusicType, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

int32 UMoriaUtils::PostMusicEvent(EMorMusic MusicType, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UMoriaUtils::KillOrDestroyActor(AActor* Target, const FMoriaDamageEvent& Hit) {
}

bool UMoriaUtils::IsSteamDeck() {
    return false;
}

bool UMoriaUtils::IsShippingOrTestBuild() {
    return false;
}

bool UMoriaUtils::IsShippingBuild() {
    return false;
}

bool UMoriaUtils::IsSandbox(const UObject* WorldContextObject) {
    return false;
}

bool UMoriaUtils::IsGamepadConnected() {
    return false;
}

bool UMoriaUtils::IsActorDead(AActor* Target) {
    return false;
}

bool UMoriaUtils::IsAcceptableGameMode(const UObject* WorldContextObject, EMorGameModeFlags AcceptableGameModes) {
    return false;
}

FName UMoriaUtils::GetZoneForPlayer(const UObject* WorldContextObject, ACharacter* Character) {
    return NAME_None;
}

AWorldLayout* UMoriaUtils::GetWorldLayout(const UObject* WorldContextObject) {
    return NULL;
}

FSlateBrush UMoriaUtils::GetWaypointWorldIcon(const UObject* WorldContextObject, FName IconName, FGameplayTag LandmarkId) {
    return FSlateBrush{};
}

FSlateBrush UMoriaUtils::GetWaypointMapIcon(const UObject* WorldContextObject, FName IconName, FGameplayTag LandmarkId) {
    return FSlateBrush{};
}

int32 UMoriaUtils::GetTotalPlayerCountIncludingConnecting(const UObject* WorldContextObject) {
    return 0;
}

ATimeManager* UMoriaUtils::GetTimeManager(const UObject* WorldContextObject) {
    return NULL;
}

AActor* UMoriaUtils::GetStationaryActorOfClassInSameBubble(const AActor* BubbleActor, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

ASleepManager* UMoriaUtils::GetSleepManager(const UObject* WorldContextObject) {
    return NULL;
}

AMorSettlementManager* UMoriaUtils::GetSettlementManager(const UObject* WorldContextObject) {
    return NULL;
}

void UMoriaUtils::GetPlayersInBubble(const UObject* WorldContextObject, UWorldLayoutBubble* Bubble, TArray<ACharacter*>& OutCharacters) {
}

float UMoriaUtils::GetPlayerCountFactor(const UObject* WorldContextObject) {
    return 0.0f;
}

int32 UMoriaUtils::GetPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

FString UMoriaUtils::GetPlatformAccountDisplayName(const UObject* WorldContext) {
    return TEXT("");
}

AMorNPCManager* UMoriaUtils::GetNpcManager(const UObject* WorldContextObject) {
    return NULL;
}

AMoriaGameState* UMoriaUtils::GetMoriaGameState(const UObject* WorldContextObject) {
    return NULL;
}

AActor* UMoriaUtils::GetManager(const UObject* WorldContextObject, const TSubclassOf<AActor> ManagerClass) {
    return NULL;
}

FGuid UMoriaUtils::GetLocalPlayerGuid(const UObject* WorldContext) {
    return FGuid{};
}

FString UMoriaUtils::GetEpicAccountId() {
    return TEXT("");
}

AMorDiscoveryManager* UMoriaUtils::GetDiscoveryManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 UMoriaUtils::GetDepthFloat(const FVector& Position) {
    return 0;
}

int32 UMoriaUtils::GetDepth(const FVector& Position) {
    return 0;
}

AMorCharacter* UMoriaUtils::GetClosestLivePlayer(const UObject* WorldContextObject, FVector TestLocation) {
    return NULL;
}

UObject* UMoriaUtils::GetClassDefaultObject(UClass* ObjectClass) {
    return NULL;
}

FCellGameplayData UMoriaUtils::GetCellGameplayDataForActor(const UObject* WorldContextObject, const AActor* Actor, const bool bWarnOnInvalidData) {
    return FCellGameplayData{};
}

FCellGameplayData UMoriaUtils::GetCellGameplayData(const UObject* WorldContextObject, const FVector& WorldPosition) {
    return FCellGameplayData{};
}

UWorldLayoutBubble* UMoriaUtils::GetBubbleForPlayer(const UObject* WorldContextObject, ACharacter* Character) {
    return NULL;
}

UMorBubbleCatalog* UMoriaUtils::GetBubbleCatalog(const UObject* WorldContextObject) {
    return NULL;
}

void UMoriaUtils::GetAllStationaryActorsOfClassInSameBubble(const AActor* BubbleActor, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

void UMoriaUtils::GetAllPlayerControllers(const UObject* WorldContextObject, TArray<AMorPlayerController*>& OutPlayerControllers) {
}

void UMoriaUtils::GetAllPlayerCharacters(const UObject* WorldContextObject, TArray<AMorCharacter*>& OutCharacters) {
}

TArray<UClass*> UMoriaUtils::GetAllChildrenOfClass(UClass* ParentClass) {
    return TArray<UClass*>();
}

EMoriaTeam UMoriaUtils::GetActorTeam(const AActor* Target) {
    return EMoriaTeam::Dwarves;
}

UActorComponent* UMoriaUtils::FindComponentByName(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass, const FString& InName) {
    return NULL;
}

bool UMoriaUtils::DoesActorShareBubbleWithPlayer(const AActor* Actor) {
    return false;
}

void UMoriaUtils::CopyToClipboard(const FString& TextToCopy) {
}

void UMoriaUtils::ClearTimer(FTimerHandle& Timer, const UObject* WorldContextObject) {
}


