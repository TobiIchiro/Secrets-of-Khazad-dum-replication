#include "FGKBlueprintCheatEntryWidget.h"

UFGKBlueprintCheatEntryWidget::UFGKBlueprintCheatEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CollapsedIcon = NULL;
    this->ExpandedIcon = NULL;
    this->BackgroundButton = NULL;
    this->TextBlock = NULL;
    this->PaddingPerLevel = 0;
    this->EntryData = NULL;
}

void UFGKBlueprintCheatEntryWidget::OnEntryClicked() {
}


