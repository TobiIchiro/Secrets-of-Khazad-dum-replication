#include "MorNPCComponent.h"
#include "Net/UnrealNetwork.h"

UMorNPCComponent::UMorNPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->bIsInteractable = true;
    this->bManagerInteractionRegister = true;
    this->bManageInteractionEnabled = true;
    this->bReviveInteractionEnabled = true;
    this->bReviveInteractionRegister = true;
    this->bRescueInteractionRegister = true;
    this->bRescueInteractionEnabled = true;
    this->bRecruitInteractionRegister = true;
    this->bRecruitInteractionEnabled = true;
    this->bDeliverResearchInteractionRegister = true;
    this->bDeliverResearchInteractionEnabled = true;
    this->bDetailsInteractionRegister = true;
    this->bDetailsInteractionEnabled = true;
    this->bTalkInteractionRegister = true;
    this->bTalkInteractionEnabled = true;
    this->FadeTime = 4.00f;
    this->LastInteractor = NULL;
    this->InteractableManager = NULL;
    this->NPCCharacter = NULL;
    this->ConversationComponent = NULL;
    this->HidePrimaryRequestCount = 0;
    this->HideOffhandRequestCount = 0;
    this->HideHolsterRequestCount = 0;
    this->InteractingSitSpot = NULL;
    this->bHoldingMug = false;
    this->SpawnedMug = NULL;
    this->InteractingBehaviorPoint = NULL;
    this->BarkDistanceRange = 250.00f;
    this->LastBarkedTime = 0.00f;
    this->CurrentBarkCooldownTime = 0.00f;
}

void UMorNPCComponent::SetRoleFuzzy(const FString& RoleString) {
}

void UMorNPCComponent::SetRole(const FMorNPCRoleRowHandle& MorNPCRoleRowHandle) {
}

void UMorNPCComponent::SetInteracting(bool bCurrentlyInteracting) {
}

void UMorNPCComponent::SetCurrentActivity(const FMorNPCActivityRowHandle& ActivityHandle) {
}

void UMorNPCComponent::SendToSettlement(int32 SettlementWaypointID) {
}

void UMorNPCComponent::SendToBase(int32 BaseWaypointID) {
}

void UMorNPCComponent::SendBackToSettlement() {
}

void UMorNPCComponent::ResolveEquipmentChanged() {
}

void UMorNPCComponent::ResetResearchProgress() const {
}

void UMorNPCComponent::RemoveNpcFromSettlement() {
}

void UMorNPCComponent::RegisterWithNPCManager() {
}

void UMorNPCComponent::RegisterToInteractableManager() {
}

void UMorNPCComponent::OnRep_SkillsAcquired() {
}

void UMorNPCComponent::OnRep_NpcGuid() {
}

void UMorNPCComponent::OnRep_HolsterRequestCount(uint32 OldValue) {
}

void UMorNPCComponent::OnRep_HoldingMug() {
}

void UMorNPCComponent::OnRep_HidePrimaryRequestCount(uint32 OldValue) {
}

void UMorNPCComponent::OnRep_HideOffhandRequestCount(uint32 OldValue) {
}

void UMorNPCComponent::MulticastSpawnActivityPointGainedFX_Implementation() {
}

bool UMorNPCComponent::IsInteracting() const {
    return false;
}

bool UMorNPCComponent::IsInitialSkill(FMorNPCSkillRowHandle SkillHandle) const {
    return false;
}

bool UMorNPCComponent::HasMaxActivityPoints() const {
    return false;
}

void UMorNPCComponent::HandleEquipmentChanged() {
}

TArray<FMorNPCTraitRowHandle> UMorNPCComponent::GetTraits() const {
    return TArray<FMorNPCTraitRowHandle>();
}

FText UMorNPCComponent::GetTraitNameText() const {
    return FText::GetEmpty();
}

TArray<FMorNPCSkillRowHandle> UMorNPCComponent::GetSkills() const {
    return TArray<FMorNPCSkillRowHandle>();
}

float UMorNPCComponent::GetResearchProgress() const {
    return 0.0f;
}

FText UMorNPCComponent::GetNpcRoleDescription() const {
    return FText::GetEmpty();
}

FText UMorNPCComponent::GetNpcRole() const {
    return FText::GetEmpty();
}

FText UMorNPCComponent::GetNpcName() const {
    return FText::GetEmpty();
}

FText UMorNPCComponent::GetNpcFlavorText() const {
    return FText::GetEmpty();
}

int32 UMorNPCComponent::GetNpcDepartureTimestamp() const {
    return 0;
}

void UMorNPCComponent::GetNpcDepartureTime(int32& Days, int32& Hours, int32& Minutes) const {
}

int32 UMorNPCComponent::GetMaxActivityPoints() const {
    return 0;
}

FMorNPCActivityRowHandle UMorNPCComponent::GetInterruptedActivity() const {
    return FMorNPCActivityRowHandle{};
}

FMorNPCActivityRowHandle UMorNPCComponent::GetGatherNothingFoundActivity() const {
    return FMorNPCActivityRowHandle{};
}

FGameplayTagContainer UMorNPCComponent::GetGatherFilter() const {
    return FGameplayTagContainer{};
}

FMorNPCRoleRowHandle UMorNPCComponent::GetCurrentRole() const {
    return FMorNPCRoleRowHandle{};
}

FMorNPCActivityRowHandle UMorNPCComponent::GetCurrentActivity() const {
    return FMorNPCActivityRowHandle{};
}

AMorCharacter* UMorNPCComponent::GetCharacter() const {
    return NULL;
}

int32 UMorNPCComponent::GetActivityPoints() const {
    return 0;
}

void UMorNPCComponent::ExecuteSetRole(const FMorNPCRoleRowHandle& NewRole) {
}

void UMorNPCComponent::ClearLocationHistory() {
}

float UMorNPCComponent::AddResearchProgress(float ProgressAmount) {
    return 0.0f;
}

void UMorNPCComponent::AddActivityPoints(int32 Amount) {
}

void UMorNPCComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorNPCComponent, NpcGuid);
    DOREPLIFETIME(UMorNPCComponent, SkillsInitial);
    DOREPLIFETIME(UMorNPCComponent, SkillsAcquired);
    DOREPLIFETIME(UMorNPCComponent, HidePrimaryRequestCount);
    DOREPLIFETIME(UMorNPCComponent, HideOffhandRequestCount);
    DOREPLIFETIME(UMorNPCComponent, HideHolsterRequestCount);
    DOREPLIFETIME(UMorNPCComponent, bHoldingMug);
}


