#include "MorRecipeViewerStationListWidget.h"
#include "Templates/SubclassOf.h"

UMorRecipeViewerStationListWidget::UMorRecipeViewerStationListWidget() {
    this->StationList = NULL;
}

void UMorRecipeViewerStationListWidget::EndModifyStationList() {
}

void UMorRecipeViewerStationListWidget::CLearStationList() {
}

void UMorRecipeViewerStationListWidget::BeginModifyStationList() {
}

UUserWidget* UMorRecipeViewerStationListWidget::AddToStationList(TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}


