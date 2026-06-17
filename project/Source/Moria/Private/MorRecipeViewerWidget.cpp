#include "MorRecipeViewerWidget.h"

UMorRecipeViewerWidget::UMorRecipeViewerWidget() {
}

bool UMorRecipeViewerWidget::IsCraftingStationDataValid(const FMorCraftingStationData& Data) const {
    return false;
}

void UMorRecipeViewerWidget::Initalize(const UMorCraftingScreen* CraftingScreen, const TArray<FMorConstructionRowHandle>& StationsToExclude) {
}

TArray<FMorCraftingStationData> UMorRecipeViewerWidget::GetCraftingStationRecipeData() const {
    return TArray<FMorCraftingStationData>();
}


