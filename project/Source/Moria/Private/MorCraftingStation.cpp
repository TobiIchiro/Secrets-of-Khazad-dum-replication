#include "MorCraftingStation.h"
#include "FGKActorFSMComponent.h"
#include "MorCraftingComponent.h"
#include "Net/UnrealNetwork.h"

AMorCraftingStation::AMorCraftingStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraftingComponent = CreateDefaultSubobject<UMorCraftingComponent>(TEXT("CraftingComponent"));
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InteractableFSMComp"));
    this->bCanCraftBasicRecipes = false;
    this->bCanPinMultipleRecipes = false;
    this->NpcFakeCraftTimeProgress = 0.00f;
    this->NpcCraftTimeIntervalInGameTime_StartedAt = -1;
}

void AMorCraftingStation::TogglePinnedRecipe(const FMorItemRecipeRowHandle RecipeHandle) {
}

bool AMorCraftingStation::ShouldShowPinnedRecipeUI() {
    return false;
}

void AMorCraftingStation::SendResultsToCraftReceiverOnBubbleLoad() {
}

void AMorCraftingStation::RequestCancelCraft() {
}

void AMorCraftingStation::OnRep_PinnedRecipes() {
}

void AMorCraftingStation::OnRep_NpcFakeCraftRecipe() {
}

void AMorCraftingStation::OnRep_CraftResults() {
}

void AMorCraftingStation::OnRecipeStarted(const FMorItemRecipeRowHandle RecipeHandle) {
}

void AMorCraftingStation::OnRecipeFinished(const FMorItemRecipeRowHandle RecipeHandle, bool bAllCraftingFinished) {
}



void AMorCraftingStation::OnCraftingCanceled() {
}

bool AMorCraftingStation::IsPinnedRecipe(const FMorItemRecipeRowHandle RecipeHandle) {
    return false;
}

bool AMorCraftingStation::HasItemsToCollect() const {
    return false;
}

FMorItemRecipeDefinition AMorCraftingStation::GetRecipeInProgress() const {
    return FMorItemRecipeDefinition{};
}

TArray<FMorItemRecipeRowHandle> AMorCraftingStation::GetPinnedRecipes() const {
    return TArray<FMorItemRecipeRowHandle>();
}

AActor* AMorCraftingStation::GetFixedDestinationContainer_Implementation(const FMorItemRecipeDefinition& Recipe) const {
    return NULL;
}

FMorConstructionDefinition AMorCraftingStation::GetDefinition() const {
    return FMorConstructionDefinition{};
}

float AMorCraftingStation::GetCraftTime() const {
    return 0.0f;
}

TArray<FItemCount> AMorCraftingStation::GetCraftResults() const {
    return TArray<FItemCount>();
}

void AMorCraftingStation::GetCraftProgress(float& OutPctProgress, float& OutTimeRemaining) const {
}

void AMorCraftingStation::CollectSingleItem(UMorInventoryComponent* TargetInventory) {
}

void AMorCraftingStation::CollectAllItems(UMorInventoryComponent* TargetInventory) {
}

void AMorCraftingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorCraftingStation, CraftResults);
    DOREPLIFETIME(AMorCraftingStation, PinnedRecipes);
    DOREPLIFETIME(AMorCraftingStation, NpcFakeCraftRecipe);
    DOREPLIFETIME(AMorCraftingStation, NpcFakeCraftTimeProgress);
    DOREPLIFETIME(AMorCraftingStation, NpcCraftTimeIntervalInGameTime_StartedAt);
}


