#include "MorStoryManager.h"
#include "Net/UnrealNetwork.h"

AMorStoryManager::AMorStoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SongOfRitesSectionIndex = 0;
}

void AMorStoryManager::VoiceOverBark(const FMorLoreRowHandle& LoreRowHandle, AMorCharacter* MorCharacter) {
}

void AMorStoryManager::SendOathRingSummons_Implementation() {
}

void AMorStoryManager::RetractOathRingSummons_Implementation() {
}

void AMorStoryManager::OnRep_DiscoveredLoreEntries() {
}

void AMorStoryManager::OnRep_AllCompletedGoals() {
}

void AMorStoryManager::OnItemRecipeDiscovered(const FMorItemRecipeDefinition& ItemRecipeDefinition) {
}

void AMorStoryManager::OnItemDiscovered(const FMorAnyItemRowHandle& ItemHandle, AActor* Discoverer) {
}

void AMorStoryManager::OnEntitlementUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status) {
}

void AMorStoryManager::OnConstructionRecipeDiscovered(const FMorConstructionRecipeDefinition& ConstructionRecipeDefinition) {
}

void AMorStoryManager::MulticastStoryFragmentReceivedNotif_Implementation(const FMorLoreRowHandle& LoreRowHandle, const TArray<FMorLoreRowHandle>& CompletedGoalEntries, bool NewDiscovery, ENotifyRule NotifyRules, const ACharacter* Discoverer) {
}

void AMorStoryManager::MulticastGoalComplete_Implementation(const ACharacter* Dwarf, const FMorLoreRowHandle& LoreRowHandle) {
}

bool AMorStoryManager::IsGoalEntryCompleted(const FMorLoreRowHandle& LoreRowHandle) {
    return false;
}


bool AMorStoryManager::HasDiscoveredLore(const FMorLoreRowHandle& LoreRowHandle) const {
    return false;
}

FMorItemRowHandle AMorStoryManager::GetOldRingItemRowHandle() const {
    return FMorItemRowHandle{};
}

TArray<FMorLoreRowHandle> AMorStoryManager::GetAllDiscoveredLoreEntries() const {
    return TArray<FMorLoreRowHandle>();
}

void AMorStoryManager::DiscoverStoryFragment(const FMorLoreRowHandle& LoreRowHandle, ENotifyRule NotifyRule, const ACharacter* Discoverer) {
}

void AMorStoryManager::CompleteGoalEntry(const ACharacter* Dwarf, const FMorLoreRowHandle& LoreRowHandle) {
}

void AMorStoryManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorStoryManager, DiscoveredLoreEntries);
    DOREPLIFETIME(AMorStoryManager, AllCompletedGoals);
}


