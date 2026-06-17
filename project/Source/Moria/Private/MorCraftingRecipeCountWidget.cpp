#include "MorCraftingRecipeCountWidget.h"

UMorCraftingRecipeCountWidget::UMorCraftingRecipeCountWidget() {
    this->CraftingComponent = NULL;
}

void UMorCraftingRecipeCountWidget::SnapshotApplied() {
}


void UMorCraftingRecipeCountWidget::ItemRecipeLearned(const FMorItemRecipeDefinition& ItemRecipe) {
}

void UMorCraftingRecipeCountWidget::InitStation(const AMorCraftingStation* TargetCraftingStation) {
}

void UMorCraftingRecipeCountWidget::InitCrafting(const UMorCraftingComponent* TargetCraftingComponent) {
}

int32 UMorCraftingRecipeCountWidget::GetNewRecipeCount() const {
    return 0;
}

void UMorCraftingRecipeCountWidget::DataViewed(const UClass* DataClass, const FName& DataName) {
}


