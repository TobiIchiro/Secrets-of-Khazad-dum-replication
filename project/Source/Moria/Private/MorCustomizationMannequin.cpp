#include "MorCustomizationMannequin.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CustomizationManager.h"
#include "ModularCharacterComponent.h"
#include "MorEquipComponent.h"
#include "MorMannequinInventoryComponent.h"
#include "MoriaAbilitySystemComponent.h"
#include "VoiceComponent.h"

AMorCustomizationMannequin::AMorCustomizationMannequin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMoriaAbilitySystemComponent>(TEXT("AbilitySystem"))) {
    this->InventoryComp = CreateDefaultSubobject<UMorMannequinInventoryComponent>(TEXT("InventoryComp"));
    this->EquipComp = CreateDefaultSubobject<UMorEquipComponent>(TEXT("EquipComp"));
    this->ModularCharacter = CreateDefaultSubobject<UModularCharacterComponent>(TEXT("ModularCharacterComponent"));
    this->bEnableLiveEditorMode = false;
    this->bWasCleared = false;
    this->bEnableOutfitCustomization = false;
    this->bEnableBodyCustomization = false;
    this->CustomizationManager = CreateDefaultSubobject<UCustomizationManager>(TEXT("CustomizationMan"));
    this->VoiceAk = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent_Voice"));
    this->Voice = CreateDefaultSubobject<UVoiceComponent>(TEXT("VoiceComponent"));
    // SetupAttachment to Mesh removed — causes GC crash during CDO construction
}

void AMorCustomizationMannequin::ResetEquipment() {
}


