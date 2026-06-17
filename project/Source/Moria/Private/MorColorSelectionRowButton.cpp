#include "MorColorSelectionRowButton.h"

UMorColorSelectionRowButton::UMorColorSelectionRowButton() : UUserWidget(FObjectInitializer::Get()) {
    this->SelectionButton = NULL;
}

void UMorColorSelectionRowButton::SetSelectionColor(const FLinearColor& InSelectionColor, const FDataTableRowHandle& InSelectionRowHandle) {
}

void UMorColorSelectionRowButton::HandleOnSelectionButtonClicked() {
}

UButton* UMorColorSelectionRowButton::GetSelectionButton() const {
    return NULL;
}


