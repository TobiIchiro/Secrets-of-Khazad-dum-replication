#include "FGKBlueprintCheatsWidget.h"

UFGKBlueprintCheatsWidget::UFGKBlueprintCheatsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CheatsTreeView = NULL;
    this->CollapseAllButton = NULL;
    this->ExpandAllButton = NULL;
    this->CheatTree = NULL;
}

UFGKBlueprintCheatEntryWidget* UFGKBlueprintCheatsWidget::GetFirstCheatEntryWidget() {
    return NULL;
}

UButton* UFGKBlueprintCheatsWidget::GetExpandAllButton() const {
    return NULL;
}

UButton* UFGKBlueprintCheatsWidget::GetCollapseAllButton() const {
    return NULL;
}

void UFGKBlueprintCheatsWidget::ExpandTree() {
}

void UFGKBlueprintCheatsWidget::CollapseTree() {
}


