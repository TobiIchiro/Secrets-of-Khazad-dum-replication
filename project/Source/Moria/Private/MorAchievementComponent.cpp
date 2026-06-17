#include "MorAchievementComponent.h"
#include "Net/UnrealNetwork.h"

UMorAchievementComponent::UMorAchievementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorAchievementComponent::ServerReportAchievementManual_Implementation(const FMorAchievementRowHandle& Achievement) {
}

void UMorAchievementComponent::ReportAchievementZoneEntered(FMorZoneRowHandle ZoneEntered) {
}

void UMorAchievementComponent::ReportAchievementManual(const FMorAchievementRowHandle& Achievement) {
}

void UMorAchievementComponent::ReportAchievementItemCrafted(const FMorAnyItemRowHandle& ItemCrafted) {
}

void UMorAchievementComponent::ReportAchievementEnemyKilled(AMorCharacter* EnemyKilledClass) {
}

void UMorAchievementComponent::OnRep_UpdateAchievementProgress(const TArray<FMorAchievementProgress> OldPlayerAchievementProgress) {
}

bool UMorAchievementComponent::IsAchievementUnlocked(const FMorAchievementRowHandle& Achievement) const {
    return false;
}

int32 UMorAchievementComponent::GetAchievementProgress(const FMorAchievementRowHandle& Achievement) const {
    return 0;
}

void UMorAchievementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorAchievementComponent, PlayerAchievementProgress);
}


