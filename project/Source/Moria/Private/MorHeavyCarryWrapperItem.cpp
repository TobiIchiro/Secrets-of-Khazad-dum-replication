#include "MorHeavyCarryWrapperItem.h"

AMorHeavyCarryWrapperItem::AMorHeavyCarryWrapperItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTarget = NULL;
    this->CurrentHeavyCarryTargetComponent = NULL;
}

void AMorHeavyCarryWrapperItem::ReplicatedTargetChanged(AActor* NewTarget) {
}

void AMorHeavyCarryWrapperItem::ItemPreEjected(const FItemHandle& Item, const int32 Count, const FEjectItemProperties& EjectProperties) {
}

void AMorHeavyCarryWrapperItem::HandleOnTeleportFinished(AActor* Self) {
}


