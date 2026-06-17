#include "CustomizationCharacter.h"
#include "CustomizationManager.h"

ACustomizationCharacter::ACustomizationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableLiveEditorMode = false;
    this->bWasCleared = false;
    this->bEnableOutfitCustomization = false;
    this->bEnableBodyCustomization = false;
    this->CustomizationManager = CreateDefaultSubobject<UCustomizationManager>(TEXT("CustomizationMan"));
}


