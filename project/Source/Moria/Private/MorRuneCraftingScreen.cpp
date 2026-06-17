#include "MorRuneCraftingScreen.h"

UMorRuneCraftingScreen::UMorRuneCraftingScreen() {
    this->Crafter = NULL;
    this->RuneCraftingStation = NULL;
}

bool UMorRuneCraftingScreen::IsRuneLearned(UMorRuneEffect* Rune) const {
    return false;
}

bool UMorRuneCraftingScreen::IsRuneInscribed(FItemHandle ItemHandle) const {
    return false;
}

bool UMorRuneCraftingScreen::IsRuneInscribable(FItemHandle ItemHandle, UMorRuneEffect* Rune) const {
    return false;
}

void UMorRuneCraftingScreen::InscribeRune(FItemHandle ItemHandle, UMorRuneEffect* Rune) const {
}

TArray<FMorRequiredRecipeMaterial> UMorRuneCraftingScreen::GetRuneCosts(UMorRuneEffect* Rune) const {
    return TArray<FMorRequiredRecipeMaterial>();
}

TArray<FItemHandle> UMorRuneCraftingScreen::GetItemsToInscribe() const {
    return TArray<FItemHandle>();
}

bool UMorRuneCraftingScreen::CanPayCost(UMorRuneEffect* Rune) const {
    return false;
}

bool UMorRuneCraftingScreen::CanInscribeRune(FItemHandle ItemHandle) const {
    return false;
}


