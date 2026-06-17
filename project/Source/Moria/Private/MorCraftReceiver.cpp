#include "MorCraftReceiver.h"
#include "MorInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMorCraftReceiver::AMorCraftReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MealItem = NULL;
    this->DinnerSound = NULL;
    this->bIsReserved = false;
    this->StationReservedBy = NULL;
    this->RegisteredStationReservedBy = NULL;
    this->MorInventoryComp = CreateDefaultSubobject<UMorInventoryComponent>(TEXT("InventoryComp"));
    this->SecondsTillSpoilage = 1000000000.00f;
    this->MealTime = EMealTime::None;
    this->bOverrideCraftQueueLimit = false;
    this->CraftQueueLimit = 0;
}

void AMorCraftReceiver::UpdateVisualsMulticast_Implementation() {
}


void AMorCraftReceiver::Spoil_Implementation() {
}

void AMorCraftReceiver::SetupNewMeal(TSubclassOf<AInventoryItem> NewItem) {
}

void AMorCraftReceiver::SetIsReserved(const bool Reserved, const bool CraftSucceeded, UCraftingComponent* Station) {
}

void AMorCraftReceiver::ServerConsume_Implementation(TSubclassOf<AInventoryItem> Meal, ACharacter* Interactor, bool bByNPC) {
}

void AMorCraftReceiver::ResetTable() {
}

void AMorCraftReceiver::OnRep_StationReservedBy() {
}

void AMorCraftReceiver::OnRep_Reserved() {
}









void AMorCraftReceiver::MulicastPlayDinnerSound_Implementation() {
}

bool AMorCraftReceiver::IsSpoiled() const {
    return false;
}

bool AMorCraftReceiver::IsEmpty() const {
    return false;
}

UCraftingComponent* AMorCraftReceiver::GetStationReservedBy() const {
    return NULL;
}

int32 AMorCraftReceiver::GetRemainingItemsCount() const {
    return 0;
}

bool AMorCraftReceiver::GetIsReserved() const {
    return false;
}


void AMorCraftReceiver::Consume(ACharacter* Interactor, bool bByNPC) {
}

void AMorCraftReceiver::Clear_Implementation(ACharacter* Interactor) {
}

void AMorCraftReceiver::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorCraftReceiver, MealItem);
    DOREPLIFETIME(AMorCraftReceiver, bIsReserved);
    DOREPLIFETIME(AMorCraftReceiver, StationReservedBy);
}


