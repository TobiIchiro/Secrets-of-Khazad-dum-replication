#include "MorTutorialComponent.h"
#include "Templates/SubclassOf.h"

UMorTutorialComponent::UMorTutorialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorTutorialComponent::TriggerTutorialUponCompletion_Implementation(ACharacter* Player, const FMorTutorialRowHandle& CompletedTutorialRowHandle) {
}

void UMorTutorialComponent::TriggerTutorial_Implementation(ACharacter* Player, const FMorTutorialRowHandle& TutorialRowHandle) {
}

void UMorTutorialComponent::SetTutorialEntrySelected_Implementation(AMorPlayerController* Player, const FMorTutorialRowHandle& TutorialRowHandle) {
}

void UMorTutorialComponent::ReportTutorialRepairAction_Implementation(ACharacter* Player, EMorTutorialAction TutorialAction, FMorConstructionRecipeRowHandle ConstructionRecipeRowHandle) {
}

void UMorTutorialComponent::ReportTutorialItemAction_Implementation(ACharacter* Player, EMorTutorialAction TutorialAction, TSubclassOf<AMorItemBase> ItemClass) {
}

void UMorTutorialComponent::ReportTutorialAction_Implementation(ACharacter* Player, EMorTutorialAction TutorialAction) {
}

void UMorTutorialComponent::OnItemEquipped(const FItemHandle& Item) {
}


