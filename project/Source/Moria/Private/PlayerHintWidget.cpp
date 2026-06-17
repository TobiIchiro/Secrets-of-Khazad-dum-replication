#include "PlayerHintWidget.h"

UPlayerHintWidget::UPlayerHintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerListManager = NULL;
}

void UPlayerHintWidget::ZoomieStartedEvent(FText BubbleName) {
}

void UPlayerHintWidget::ZoomieFinishedEvent(AActor* PlayerCharacter) {
}




void UPlayerHintWidget::RuneRecipePartialProgressChangedEvent(const FMorRuneDefinition& RuneRecipe, const int32 NewProgress, const int32 OldProgress) {
}

void UPlayerHintWidget::RuneRecipeLearnedEvent(const FMorRuneDefinition& RuneRecipe) {
}

void UPlayerHintWidget::PlayerGoToBedEvent(bool IsInBed) {
}















void UPlayerHintWidget::ItemRecipePartialProgressChangedEvent(const FMorItemRecipeDefinition& ItemRecipe, const int32 NewProgress, const int32 OldProgress) {
}

void UPlayerHintWidget::ItemRecipeLearnedEvent(const FMorItemRecipeDefinition& ItemRecipe) {
}

void UPlayerHintWidget::ItemDiscoveredEvent(const FMorAnyItemRowHandle& ItemHandle, AActor* Discoverer) {
}

void UPlayerHintWidget::HordeTriggered(const AMorCharacter* TriggeringCharacter) {
}

void UPlayerHintWidget::ConstructionRecipePartialProgressChangedEvent(const FMorConstructionRecipeDefinition& ConstructionRecipe, const int32 NewProgress, const int32 OldProgress) {
}

void UPlayerHintWidget::ConstructionRecipeLearnedEvent(const FMorConstructionRecipeDefinition& ConstructionRecipe) {
}

void UPlayerHintWidget::ConstructionDiscoveredEvent(const FMorConstructionDefinition& ConstructionDef) {
}

void UPlayerHintWidget::CannotSleepEvent(EUnableSleepState State) {
}


