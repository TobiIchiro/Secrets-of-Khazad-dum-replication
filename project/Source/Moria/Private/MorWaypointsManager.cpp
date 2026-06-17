#include "MorWaypointsManager.h"
#include "Net/UnrealNetwork.h"

AMorWaypointsManager::AMorWaypointsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaypointClass = NULL;
    this->PlayerWaypointClass = NULL;
    this->LandmarkWaypointClass = NULL;
    this->MinimapManager = NULL;
    this->MaxCustomWaypointDescriptionLength = 24;
    this->MaxValidationWaypointDescriptionLength = 48;
    this->MaxPlayerWaypoints = 200;
    this->MaxReplicatedWaypoints = 300;
    this->EQSRequestID = 0;
    this->FindLocationNearBaseQuery = NULL;
    this->PlayerListManager = NULL;
    this->CurrentPlayerWaypoints = 0;
    this->MostRecentIDUsed = -1;
    this->WaypointBeingUpdatedForFastTravel = -1;
    this->PlayersNameMode = EMorMultiplayerNamesMode::BasicNames;
    this->WaypointsNameMode = EMorMultiplayerNamesMode::BasicNames;
}

void AMorWaypointsManager::UpdateWaypointDataFromRowHandle(FMorWaypointData& WaypointData) {
}

void AMorWaypointsManager::UpdateWaypoint(const FMorWaypointData& NewWaypointData) {
}

void AMorWaypointsManager::UpdateLocalVisibility(FMorWaypointData& WaypointData) {
}

void AMorWaypointsManager::TrackResourceInZone(const FMorAnyItemRowHandle& ItemHandle, const FMorZoneRowHandle& ZoneHandle, AMorCharacter* Discoverer, FMorWaypointRowHandle RowHandle) {
}

void AMorWaypointsManager::TrackChallengeInZone(const FMorChallengeRowHandle& ChallengeHandle, const FMorZoneRowHandle& ZoneHandle, FMorWaypointRowHandle RowHandle, const FVector& Offset, bool bExactLocation, bool bIgnoreMissing) {
}

void AMorWaypointsManager::SpawnWaypoint(FMorWaypointData& WaypointData) {
}

void AMorWaypointsManager::SetWaypointVisibilityById(int32 WaypointId, bool bNewWorldVisibility, bool bNewMinimapVisibility) {
}

void AMorWaypointsManager::SetWaypointVisibility(FMorWaypointData& WaypointData, bool bNewWorldVisibility, bool bNewMinimapVisibility) {
}

void AMorWaypointsManager::SetFastTravelPoint(int32 WaypointId, FVector FastTravelLocation) {
}

void AMorWaypointsManager::ServerDestroyWaypointById(int32 WaypointId) {
}

void AMorWaypointsManager::RequestDestroyWaypoint_Implementation(const FMorWaypointData& WaypointData) {
}

int32 AMorWaypointsManager::RequestCreateWaypoint(FMorWaypointData WaypointData, bool bForce) {
    return 0;
}

void AMorWaypointsManager::RemoveFastTravelPoint(int32 WaypointId) {
}

void AMorWaypointsManager::OnWorldGenDone() {
}

void AMorWaypointsManager::OnGuidUpdated() {
}

void AMorWaypointsManager::OnEnteredNewZone(ACharacter* Character, FMorZoneRowHandle Zone) {
}

bool AMorWaypointsManager::IsVisibleForLocalPlayer(const UObject* WorldContext, const FMorWaypointData& WaypointData, EMorWaypointContext WaypointContext) {
    return false;
}

bool AMorWaypointsManager::IsDataPrimarilyDerivedFromDataTable(const FMorWaypointData& WaypointData) const {
    return false;
}

void AMorWaypointsManager::HandleOnWaypointsNameModeChanged(EMorMultiplayerNamesMode NewMode) {
}

void AMorWaypointsManager::HandleOnPlayersNameModeChanged(EMorMultiplayerNamesMode NewMode) {
}

FMorLandmarkWaypointProperties AMorWaypointsManager::GetWaypointPropertiesByRowHandle(FMorWaypointRowHandle RowHandle, FMorZoneRowHandle ZoneRowHandle, FIntVector& OutIntPosition) {
    return FMorLandmarkWaypointProperties{};
}

AMorWaypoint* AMorWaypointsManager::GetWaypointFromWaypointId(int32 WaypointId) const {
    return NULL;
}

AMorWaypoint* AMorWaypointsManager::GetWaypointFromWaypointData(const FMorWaypointData& WaypointData) const {
    return NULL;
}

AMorWaypoint* AMorWaypointsManager::GetWaypointFromRowHandle(const FMorWaypointRowHandle& RowHandle) const {
    return NULL;
}

AMorWaypoint* AMorWaypointsManager::GetWaypointFromLandmark(FGameplayTag LandmarkId) const {
    return NULL;
}

FText AMorWaypointsManager::GetWaypointDescriptionStatic(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering, const UObject* WorldContext) {
    return FText::GetEmpty();
}

FText AMorWaypointsManager::GetWaypointDescription(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering) const {
    return FText::GetEmpty();
}

FGameplayTagContainer AMorWaypointsManager::GetWaypointDataTags(FMorWaypointData WaypointData) {
    return FGameplayTagContainer{};
}

bool AMorWaypointsManager::GetWaypointDataFromWaypointId(int32 WaypointId, FMorWaypointData& OutWaypointData) {
    return false;
}

AMorWaypoint* AMorWaypointsManager::GetWaypointBeingUpdatedForFastTravel() {
    return NULL;
}

FMorWaypointRowHandle AMorWaypointsManager::GetRowHandleFromLandmarkID(FGameplayTag LandmarkId) const {
    return FMorWaypointRowHandle{};
}

int32 AMorWaypointsManager::GetNextAvailableID() {
    return 0;
}

AMorMinimapManager* AMorWaypointsManager::GetMinimapManager() {
    return NULL;
}

FSlateBrush AMorWaypointsManager::GetMapIconByFName(FName IconName, const FGameplayTag& LandmarkId) const {
    return FSlateBrush{};
}

FGameplayTag AMorWaypointsManager::GetLandmarkTargetForZone(FMorZoneRowHandle Zone) {
    return FGameplayTag{};
}

FSlateBrush AMorWaypointsManager::GetIconByFName(FName IconName, const FGameplayTag& LandmarkId) const {
    return FSlateBrush{};
}

FName AMorWaypointsManager::GetFNameByIcon(const FSlateBrush& IconBrush) {
    return NAME_None;
}

FVector AMorWaypointsManager::GetFastTravelPoint(int32 WaypointId, bool& bOutIsValid) const {
    return FVector{};
}

TArray<FMorWaypointData> AMorWaypointsManager::GetAllWaypointsWithTags(FGameplayTagContainer RequiredTags) {
    return TArray<FMorWaypointData>();
}

TArray<AMorWaypoint*> AMorWaypointsManager::GetAllWaypoints() {
    return TArray<AMorWaypoint*>();
}

AMorWaypointsManager* AMorWaypointsManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool AMorWaypointsManager::Equality_WaypointData(FMorWaypointData A, FMorWaypointData B) {
    return false;
}

void AMorWaypointsManager::DiscoverWaypointByRowHandle(FMorWaypointRowHandle WaypointRowHandle, FVector CallingLocation, FMorZoneRowHandle TargetZone) {
}

FMorWaypointData AMorWaypointsManager::CreateSettlementWaypointData_Implementation(FVector SettlementLocation) {
    return FMorWaypointData{};
}

FText AMorWaypointsManager::CreateDefaultWaypointDescriptionWithCounter(const FMorWaypointData& WaypointData, const FText& DescriptionFormatBase, const FText& DescriptionFormatWithCounter) const {
    return FText::GetEmpty();
}

FText AMorWaypointsManager::CreateDefaultWaypointDescription_Implementation(const FMorWaypointData& WaypointData, bool& bOutNeedFiltering) const {
    return FText::GetEmpty();
}

FMorWaypointData AMorWaypointsManager::CreateBaseWaypointData_Implementation(FMorPermitData PermitData) {
    return FMorWaypointData{};
}

bool AMorWaypointsManager::CanFastTravelToWaypoint(const FMorWaypointData& WaypointData) const {
    return false;
}

bool AMorWaypointsManager::CanAddNewPlayerWaypoint() const {
    return false;
}

int32 AMorWaypointsManager::AddWaypoint(FMorWaypointData NewWaypointData, bool bForce) {
    return 0;
}

void AMorWaypointsManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorWaypointsManager, ReplicatedWaypointsArray);
}


