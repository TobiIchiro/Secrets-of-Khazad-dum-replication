#include "MorDiscoveryManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMorDiscoveryManager::AMorDiscoveryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AchievementFireDelay = 30.00f;
}

void AMorDiscoveryManager::TriggerAchievementForZone(const ACharacter* Character, const FMorZoneRowHandle& ZoneHandle) {
}

void AMorDiscoveryManager::SetProgressValues(const TMap<FMorProgressRowHandle, int32>& ProgressValues) {
}

void AMorDiscoveryManager::SetProgressValue(const FMorProgressRowHandle& InProgressKey, int32 Value) {
}

void AMorDiscoveryManager::SetProgress(const FMorProgressRowHandle& InProgressKey) {
}

void AMorDiscoveryManager::SetDurinAxeFragmentProgressComplete(int32 FragmentNumber) {
}

void AMorDiscoveryManager::PawnControllerChanged(APawn* Pawn, AController* Controller) {
}

void AMorDiscoveryManager::OnRep_ProgressMap() {
}

void AMorDiscoveryManager::OnRep_PartialRecipes() {
}

void AMorDiscoveryManager::OnRep_ExpeditionModifiers() {
}

void AMorDiscoveryManager::OnRep_DiscoveredZones() {
}

void AMorDiscoveryManager::OnRep_DiscoveredRecipes() {
}

void AMorDiscoveryManager::OnRep_DiscoveredLandmarks() {
}

void AMorDiscoveryManager::OnRep_DiscoveredItems() {
}

void AMorDiscoveryManager::OnRep_DiscoveredConstructions() {
}

void AMorDiscoveryManager::OnEntitlementUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status) {
}

bool AMorDiscoveryManager::IsDurinAxeFragmentCollected(int32 FragmentNumber) {
    return false;
}

EMorRecipeDiscoveryState AMorDiscoveryManager::GetRuneRecipeState(const FMorRuneDefinition& Recipe) const {
    return EMorRecipeDiscoveryState::None;
}

void AMorDiscoveryManager::GetRuneRecipeProgress(const FMorRuneDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const {
}

TArray<FMorRecipeBlock> AMorDiscoveryManager::GetRecipeBlocks(const FMorCategoryTagDefinition& CategoryTagDefinition) const {
    return TArray<FMorRecipeBlock>();
}

int32 AMorDiscoveryManager::GetProgressValue(const FMorProgressRowHandle& InProgressKey) {
    return 0;
}

bool AMorDiscoveryManager::GetProgress(const FMorProgressRowHandle& InProgressKey) {
    return false;
}

EMorRecipeDiscoveryState AMorDiscoveryManager::GetItemRecipeState(const FMorItemRecipeDefinition& Recipe) const {
    return EMorRecipeDiscoveryState::None;
}

void AMorDiscoveryManager::GetItemRecipeProgress(const FMorItemRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const {
}

int32 AMorDiscoveryManager::GetDiscoveredRuneRecipesCount() const {
    return 0;
}

int32 AMorDiscoveryManager::GetDiscoveredItemRecipesCount() const {
    return 0;
}

int32 AMorDiscoveryManager::GetDiscoveredConstructionRecipesCount() const {
    return 0;
}

TArray<FMorCategoryTagDefinition> AMorDiscoveryManager::GetConstructionRootCategorySubGroups(const FMorCategoryTagDefinition& RootCategoryTag, EFGKGetDefinitionResult& OutResult) const {
    return TArray<FMorCategoryTagDefinition>();
}

EMorRecipeDiscoveryState AMorDiscoveryManager::GetConstructionRecipeState(const FMorConstructionRecipeDefinition& Recipe) const {
    return EMorRecipeDiscoveryState::None;
}

void AMorDiscoveryManager::GetConstructionRecipeProgress(const FMorConstructionRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const {
}

TArray<FMorRecipeBlock> AMorDiscoveryManager::GetBlocksRecipeFromConstructionSubGroupsCached(const FMorCategoryTagDefinition& CategoryTags, EFGKGetDefinitionResult& OutResult) const {
    return TArray<FMorRecipeBlock>();
}

FMorRecipeBlock AMorDiscoveryManager::GetBlockContainingVariantHandle(const FMorConstructionRecipeRowHandle& RecipeHandle, EFGKGetDefinitionResult& OutResult) const {
    return FMorRecipeBlock{};
}

FMorRecipeBlock AMorDiscoveryManager::GetBlockContainingVariant(const FMorConstructionRecipeDefinition& RecipeDefinition, EFGKGetDefinitionResult& OutResult) const {
    return FMorRecipeBlock{};
}

void AMorDiscoveryManager::EncounterZone(const ACharacter* Character, const FMorZoneRowHandle& ZoneHandle, bool& bWasDiscoveredSuccessfully) {
}

void AMorDiscoveryManager::EncounterLandmark(const ACharacter* Character, const FMorLandmarkRowHandle& LandmarkHandle, bool& bWasDiscoveredSuccessfully) {
}

void AMorDiscoveryManager::EncounterConstruction(const TSubclassOf<AActor>& Construction) {
}

void AMorDiscoveryManager::DiscoverRecipe(const FName& RecipeName) {
}

void AMorDiscoveryManager::ClearProgress(const FMorProgressRowHandle& InProgressKey) {
}

bool AMorDiscoveryManager::CheckProgressValues(const TMap<FMorProgressRowHandle, int32>& ProgressValues) {
    return false;
}

TArray<FMorRuneDefinition> AMorDiscoveryManager::BP_GetDiscoveredRuneRecipes() const {
    return TArray<FMorRuneDefinition>();
}

TArray<FMorItemRecipeDefinition> AMorDiscoveryManager::BP_GetDiscoveredItemRecipes() const {
    return TArray<FMorItemRecipeDefinition>();
}

TArray<FMorConstructionRecipeDefinition> AMorDiscoveryManager::BP_GetDiscoveredConstructionRecipes() const {
    return TArray<FMorConstructionRecipeDefinition>();
}

void AMorDiscoveryManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredRecipes);
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredConstructions);
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredItems);
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredZones);
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredLandmarks);
    DOREPLIFETIME(AMorDiscoveryManager, ProgressMap);
    DOREPLIFETIME(AMorDiscoveryManager, PartialRecipes);
    DOREPLIFETIME(AMorDiscoveryManager, DiscoveredExpeditionModifiers);
}


