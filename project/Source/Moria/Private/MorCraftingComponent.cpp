#include "MorCraftingComponent.h"
#include "Net/UnrealNetwork.h"

UMorCraftingComponent::UMorCraftingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraftAbility = NULL;
    this->CraftingType = ECraftingType::Instant;
    this->InstantCraftingTime = 1.00f;
    this->DefaultMaxQueueCount = -1;
    this->CraftMontage = NULL;
    this->bIgnoreConstructionRequirements = false;
    this->CachedFuelBurningComponent = NULL;
    this->OwnerInventoryComponent = NULL;
    this->OwnerCharacter = NULL;
    this->bParallelQueuing = false;
    this->CurrentMaxQueueCount = -1;
    this->InGameTimeAtSaveInMinutes = 0;
}

bool UMorCraftingComponent::UsesParallelQueuing() const {
    return false;
}

void UMorCraftingComponent::UnlockCosmeticItem(const FMorItemDefinition& CosmeticItem) {
}

void UMorCraftingComponent::ServerUnpinRecipe_Implementation(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) const {
}
bool UMorCraftingComponent::ServerUnpinRecipe_Validate(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) {
    return true;
}

void UMorCraftingComponent::ServerUnlockCosmeticItem_Implementation(const FMorArmorRowHandle& ArmorItemHandle) const {
}
bool UMorCraftingComponent::ServerUnlockCosmeticItem_Validate(const FMorArmorRowHandle& ArmorItemHandle) {
    return true;
}

void UMorCraftingComponent::ServerTintItem_Implementation(const FItemHandle& ItemHandle, UMorItemTintEffect* TintEffect, ACharacter* Interactor) const {
}
bool UMorCraftingComponent::ServerTintItem_Validate(const FItemHandle& ItemHandle, UMorItemTintEffect* TintEffect, ACharacter* Interactor) {
    return true;
}

void UMorCraftingComponent::ServerPinRecipe_Implementation(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) const {
}
bool UMorCraftingComponent::ServerPinRecipe_Validate(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) {
    return true;
}

void UMorCraftingComponent::ServerInscribeRune_Implementation(const FItemHandle& ItemHandle, UMorRuneEffect* Rune, ACharacter* Interactor) const {
}
bool UMorCraftingComponent::ServerInscribeRune_Validate(const FItemHandle& ItemHandle, UMorRuneEffect* Rune, ACharacter* Interactor) {
    return true;
}

void UMorCraftingComponent::ServerCancelAllCrafts_Implementation(UMorCraftingComponent* TargetComponent, AActor* Player, const ECraftRefundPolicy& RefundPolicy) {
}
bool UMorCraftingComponent::ServerCancelAllCrafts_Validate(UMorCraftingComponent* TargetComponent, AActor* Player, const ECraftRefundPolicy& RefundPolicy) {
    return true;
}

void UMorCraftingComponent::ServerAddFuel_Implementation(UMorFuelBurningComponent* TargetComponent, AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) {
}
bool UMorCraftingComponent::ServerAddFuel_Validate(UMorFuelBurningComponent* TargetComponent, AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) {
    return true;
}

void UMorCraftingComponent::OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds) {
}

void UMorCraftingComponent::OnRep_CraftQueue() {
}

void UMorCraftingComponent::OnFuelExtinguished() {
}

void UMorCraftingComponent::OnFuelAdded() {
}

void UMorCraftingComponent::OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

bool UMorCraftingComponent::IsCrafting() const {
    return false;
}

TArray<FMorItemRecipeRowHandle> UMorCraftingComponent::GetQueuedRecipes() const {
    return TArray<FMorItemRecipeRowHandle>();
}

AMorCraftReceiver* UMorCraftingComponent::GetPreferredDestinationContainer(const FMorItemRecipeRowHandle& RecipeHandle) const {
    return NULL;
}

int32 UMorCraftingComponent::GetMaxQueueCount() const {
    return 0;
}

float UMorCraftingComponent::GetCraftTime(const FMorItemRecipeDefinition& RecipeDefinition) const {
    return 0.0f;
}

float UMorCraftingComponent::GetCraftRemainingTime() const {
    return 0.0f;
}

float UMorCraftingComponent::GetCraftProgress() const {
    return 0.0f;
}

void UMorCraftingComponent::ClientUnlockCosmeticItem_Implementation(const FMorArmorRowHandle& ArmorItemHandle) const {
}
bool UMorCraftingComponent::ClientUnlockCosmeticItem_Validate(const FMorArmorRowHandle& ArmorItemHandle) {
    return true;
}

void UMorCraftingComponent::ApplyTintEffectIfEquipped(const FItemHandle& ItemHandle) {
}

void UMorCraftingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorCraftingComponent, CraftQueue);
    DOREPLIFETIME(UMorCraftingComponent, CurrentMaxQueueCount);
}


