#include "MorEquipComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UMorEquipComponent::UMorEquipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DummyEquipment = NULL;
    this->MaxShadowDispelAmount = 7;
}

void UMorEquipComponent::ServerEquipDummyItem_Implementation(TSubclassOf<AInventoryItem> ItemToEquip) {
}
bool UMorEquipComponent::ServerEquipDummyItem_Validate(TSubclassOf<AInventoryItem> ItemToEquip) {
    return true;
}

void UMorEquipComponent::ServerCacheEntitlements_Implementation(const TArray<FName>& UsableEntitlements, const TArray<FName>& UnlockedCosmetics) {
}

void UMorEquipComponent::RemoveShadowDispel(const int32 Amount) {
}

void UMorEquipComponent::OnRep_DummyEquipment() {
}

void UMorEquipComponent::OnEntitlementStatusUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status) {
}

void UMorEquipComponent::OnCosmeticUpdate(const FMorItemDefinition& ItemDefinition, bool bUsable) {
}

int32 UMorEquipComponent::GetShadowDispelAmount() const {
    return 0;
}

void UMorEquipComponent::CustomizationsLocallyApplied() {
}

void UMorEquipComponent::ClientRequestEntitlements_Implementation() {
}

void UMorEquipComponent::AddShadowDispel(const int32 Amount) {
}

void UMorEquipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorEquipComponent, DummyEquipment);
}


