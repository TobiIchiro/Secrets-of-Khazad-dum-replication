#include "MorDroppedItem.h"
#include "CalloutDataComponent.h"
#include "MorHeavyCarryTargetComponent.h"
#include "MorInventoryComponent.h"
#include "MorStaticMeshComponentWithOffset.h"
#include "Net/UnrealNetwork.h"

AMorDroppedItem::AMorDroppedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorStaticMeshComponentWithOffset>(TEXT("DroppedItemMesh"))) {
    this->InterpolateTime = 0.25f;
    this->AutopickupPickupDelay = 0.50f;
    this->AutopickupMaxTime = 0.00f;
    this->AutopickupRepickupDelay = 1.00f;
    this->Inventory = CreateDefaultSubobject<UMorInventoryComponent>(TEXT("InventoryComponent"));
    this->DroppedItemMesh = (UStaticMeshComponent*)RootComponent;
    this->CalloutData = CreateDefaultSubobject<UCalloutDataComponent>(TEXT("Callout Data"));
    this->HeavyCarryComponent = CreateDefaultSubobject<UMorHeavyCarryTargetComponent>(TEXT("Heavy Carry"));
    this->InscribedRuneComponent = NULL;
    this->PickupBeaconSystem = NULL;
    this->EpicPickupBeaconSystem = NULL;
    this->PickupBeaconCullDistance = 1500.00f;
    this->TickRateIntervalBeingPickedUp = 0.00f;
    this->bInstantPickup = false;
    this->bAutopickup = true;
    this->bOptOutFromDropItemManagement = false;
    this->bBeingPickedUp = false;
    this->bIsAutoInteract = false;
    this->Dropper = NULL;
    this->Pickupper = NULL;
    this->PickupperInventory = NULL;
    this->Child = NULL;
    this->SpawnedPickupBeacon = NULL;
}


void AMorDroppedItem::OnWorldReady() {
}

void AMorDroppedItem::OnStorageWidgetFinishLoading() {
}

void AMorDroppedItem::OnRep_TintColorChanged() {
}

void AMorDroppedItem::OnRep_PickupperChanged(ACharacter* OldPickupper) {
}

void AMorDroppedItem::OnRep_DroppedItemChanged() {
}

void AMorDroppedItem::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AMorDroppedItem::InventoryChanged(const FItemHandle& Item) {
}

void AMorDroppedItem::HeavyCarryEnd() {
}

void AMorDroppedItem::HeavyCarryBegin() {
}

void AMorDroppedItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorDroppedItem, DroppedItem);
    DOREPLIFETIME(AMorDroppedItem, TintColor);
    DOREPLIFETIME(AMorDroppedItem, bAutopickup);
    DOREPLIFETIME(AMorDroppedItem, bBeingPickedUp);
    DOREPLIFETIME(AMorDroppedItem, bIsAutoInteract);
    DOREPLIFETIME(AMorDroppedItem, Dropper);
    DOREPLIFETIME(AMorDroppedItem, Pickupper);
    DOREPLIFETIME(AMorDroppedItem, PickupperInventory);
}


