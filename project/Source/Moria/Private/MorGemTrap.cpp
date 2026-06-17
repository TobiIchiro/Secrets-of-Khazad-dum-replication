#include "MorGemTrap.h"
#include "Templates/SubclassOf.h"

AMorGemTrap::AMorGemTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Receptacle = NULL;
    this->bGemTrapWasTriggered = false;
}

void AMorGemTrap::SetReceptacle(AMorReceptacle* InReceptacle) {
}

void AMorGemTrap::SetEncounterData(const FMorOrcTrapDefinition& Definition) {
}

void AMorGemTrap::InventoryItemRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount) {
}

AMorReceptacle* AMorGemTrap::GetReceptacle() const {
    return NULL;
}

FMorOrcTrapDefinition AMorGemTrap::GetEncounterData() const {
    return FMorOrcTrapDefinition{};
}


