#include "MorTipComponent.h"
#include "Net/UnrealNetwork.h"

UMorTipComponent::UMorTipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthValue = 0.00f;
    this->PlayerController = NULL;
    this->PlayerCharacter = NULL;
}

void UMorTipComponent::UnlockTip(FMorTipRowHandle Tip) {
}

void UMorTipComponent::OnRep_DisplayTip() {
}

void UMorTipComponent::OnItemEquipped(const FItemHandle& Item) {
}

void UMorTipComponent::OnCharacterPossession(APawn* OldPawn, APawn* NewPawn) {
}

void UMorTipComponent::OnBuildingBuilt(const FMorConstructionRecipeRowHandle& BuildingRecipe) {
}

void UMorTipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorTipComponent, PlayerUnlockedTips);
}


