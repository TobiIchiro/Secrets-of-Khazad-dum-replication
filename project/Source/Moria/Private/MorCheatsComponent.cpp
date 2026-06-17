#include "MorCheatsComponent.h"
#include "Templates/SubclassOf.h"

UMorCheatsComponent::UMorCheatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorCheatsComponent::ServerTeleport_Implementation(const FVector& DestLocation, const FRotator& DestRotation, int32 PlayerID) {
}
bool UMorCheatsComponent::ServerTeleport_Validate(const FVector& DestLocation, const FRotator& DestRotation, int32 PlayerID) {
    return true;
}

void UMorCheatsComponent::ServerSetPlayerTargetableByAI_Implementation(bool bSetTargetable) {
}
bool UMorCheatsComponent::ServerSetPlayerTargetableByAI_Validate(bool bSetTargetable) {
    return true;
}

void UMorCheatsComponent::ServerReviveAllFriendly_Implementation() {
}

void UMorCheatsComponent::ServerRemoveAllBuffs_Implementation(AMorCharacter* Character) {
}
bool UMorCheatsComponent::ServerRemoveAllBuffs_Validate(AMorCharacter* Character) {
    return true;
}

void UMorCheatsComponent::ServerQuit_Implementation() {
}

void UMorCheatsComponent::ServerHeal_Implementation(AMorCharacter* Character, EMorHealOption HealOptions, int32 PercentageAmount) {
}

void UMorCheatsComponent::ServerDestroyPawn_Implementation(TSubclassOf<APawn> PawnClass) {
}
bool UMorCheatsComponent::ServerDestroyPawn_Validate(TSubclassOf<APawn> PawnClass) {
    return true;
}

void UMorCheatsComponent::ServerCmd_Implementation(const FString& Command) {
}

void UMorCheatsComponent::ServerAutoSave_Implementation() {
}

void UMorCheatsComponent::ServerAllGod_Implementation() {
}
bool UMorCheatsComponent::ServerAllGod_Validate() {
    return true;
}

void UMorCheatsComponent::NavigationDebug_Implementation(const TArray<FString>& Args) {
}

void UMorCheatsComponent::ClientQuickSpawnComplete_Implementation(const FString& Msg) {
}
bool UMorCheatsComponent::ClientQuickSpawnComplete_Validate(const FString& Msg) {
    return true;
}

void UMorCheatsComponent::ClientDestroyPawnComplete_Implementation() {
}
bool UMorCheatsComponent::ClientDestroyPawnComplete_Validate() {
    return true;
}

void UMorCheatsComponent::ClientAllGodComplete_Implementation(bool CanBeDamaged) {
}
bool UMorCheatsComponent::ClientAllGodComplete_Validate(bool CanBeDamaged) {
    return true;
}


