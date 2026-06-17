#include "InventoryItem.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AInventoryItem::AInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bInfiniteUses = false;
    this->bDropOnDeath = true;
    this->bDropOnPlayerLeavingGame = false;
    this->bUseAsDroppedItem = false;
    this->bAutopickup = true;
    this->bDestroyImmediatelyOnDrop = false;
    this->bEquippable = false;
    this->bEquipToModularSlot = false;
    this->bEquipOnPickup = false;
    this->bHolsterOnPickup = false;
    this->bDropOnUnequip = false;
    this->bDetachOnUnequip = false;
    this->bHolsterOnUnequip = false;
    this->bDestroyImmediatelyOnUnequip = true;
    this->bPairedWith = false;
    this->bInvisibleEquip = false;
    this->bConsumeOnUse = false;
    this->bExpireAtZeroDurability = true;
    this->bIncludeInClientSaveData = true;
    this->DecomposesInto = NULL;
    this->RestoresBackTo = NULL;
    this->DropItemOverride = NULL;
    this->EquipSocket = TEXT("RightHandSocket");
    this->EquipSlot = EModularCharacterSlot::Chest;
}

void AInventoryItem::SetDesiredActorVisibility(bool bVisible, bool bApplyImmediately) {
}





bool AInventoryItem::IsStackable() const {
    return false;
}

bool AInventoryItem::IsInCosmeticMode() const {
    return false;
}

bool AInventoryItem::HasDurability() const {
    return false;
}

TArray<TSubclassOf<UGameplayEffect>> AInventoryItem::GetVisibleEffects() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

TArray<TSubclassOf<UGameplayEffect>> AInventoryItem::GetUseEffects() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

FGameplayTagContainer AInventoryItem::GetTags() const {
    return FGameplayTagContainer{};
}

int32 AInventoryItem::GetStackSize() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> AInventoryItem::GetSoftIconGeneric() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AInventoryItem::GetSoftIcon() const {
    return NULL;
}

int32 AInventoryItem::GetSlotWidth() const {
    return 0;
}

int32 AInventoryItem::GetSlotHeight() const {
    return 0;
}

TSubclassOf<AInventoryItem> AInventoryItem::GetRestoresBackTo() const {
    return NULL;
}

UStaticMeshComponent* AInventoryItem::GetMeshComponent() const {
    return NULL;
}

float AInventoryItem::GetMaxDurability() const {
    return 0.0f;
}

UTexture2D* AInventoryItem::GetIcon() const {
    return NULL;
}

TArray<TSubclassOf<UGameplayEffect>> AInventoryItem::GetHolsterEffects() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

bool AInventoryItem::GetExpireAtZeroDurability() const {
    return false;
}

TArray<TSubclassOf<UGameplayEffect>> AInventoryItem::GetEquipEffects() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

FText AInventoryItem::GetDisplayName() const {
    return FText::GetEmpty();
}

FText AInventoryItem::GetDescription() const {
    return FText::GetEmpty();
}

TSubclassOf<AInventoryItem> AInventoryItem::GetDecomposesInto() const {
    return NULL;
}

bool AInventoryItem::GetCurrentEquipVisibility() const {
    return false;
}

EEquipMode AInventoryItem::GetCurrentEquipMode() const {
    return EEquipMode::Unequipped;
}


