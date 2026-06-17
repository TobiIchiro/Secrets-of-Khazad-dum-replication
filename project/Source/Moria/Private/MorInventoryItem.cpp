#include "MorInventoryItem.h"
#include "NiagaraComponent.h"
#include "CalloutDataComponent.h"
#include "Templates/SubclassOf.h"

AMorInventoryItem::AMorInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimOverlayOverride = EFGKOverlayState::Default;
    this->ArmorValue = 0.00f;
    this->MinAimPitch = -180.00f;
    this->MaxAimPitch = 180.00f;
    this->PickupSound = NULL;
    this->BreakSound = NULL;
    this->EquipSound = NULL;
    this->EquipSwitch = NULL;
    this->UnequipSwitch = NULL;
    this->bCanUseFromInventory = false;
    this->ItemPriority = EMorItemPriority::Trivial;
    this->bUseDefaultCollisionForDroppedItem = false;
    this->MealTime = EMealTime::None;
    this->StartingRuneEffect = NULL;
    this->InscribedRuneComponent = NULL;
    this->CalloutData = CreateDefaultSubobject<UCalloutDataComponent>(TEXT("Callout Data"));
    this->RibbonTrails = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RibbonTrails"));
    this->bKeepOutOfWalls = false;
    this->bKeepOutOfWallsForPlayerOnly = true;
    this->KeepOutOfWallCapsuleHalfHeight = 36.00f;
    this->KeepOutOfWallCapsuleRadius = 5.00f;
    this->NativeGripPoint = NULL;
    this->ExtraGripPoint = NULL;
    this->HitLocator = NULL;
    this->bCanInscribeRune = false;
    this->bIsTintable = false;
    this->RibbonTrails->SetupAttachment(RootComponent);
}











bool AMorInventoryItem::IsItemTintable() const {
    return false;
}

UMorItemTintEffect* AMorInventoryItem::GetTintEffect(const FItemHandle& Item) {
    return NULL;
}

FText AMorInventoryItem::GetRuneInscribedDisplayName(const TSubclassOf<AInventoryItem>& Item, const UMorRuneEffect* Rune) {
    return FText::GetEmpty();
}

UMorRuneEffect* AMorInventoryItem::GetRuneEffect(const FItemHandle& Item, bool IgnoreConstraints) {
    return NULL;
}

TSet<EMorEquipSlot> AMorInventoryItem::GetMorEquipSlots() const {
    return TSet<EMorEquipSlot>();
}

FMorLoreRowHandle AMorInventoryItem::GetLoreRowHandle() const {
    return FMorLoreRowHandle{};
}

UTexture2D* AMorInventoryItem::GetInstanceIcon(const FItemHandle& Item) {
    return NULL;
}

FText AMorInventoryItem::GetInstanceDisplayName(const FItemHandle& Item) {
    return FText::GetEmpty();
}

FText AMorInventoryItem::GetInstanceDescription(const FItemHandle& Item) {
    return FText::GetEmpty();
}

bool AMorInventoryItem::CanInscribeRune() const {
    return false;
}

void AMorInventoryItem::ApplyTintToNonEquipped(const FItemHandle& Item) {
}

void AMorInventoryItem::ApplyRuneVisualEffects(const FItemHandle& Item) {
}

void AMorInventoryItem::AnyEquippedChanged() {
}


