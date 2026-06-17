#include "MorMeal.h"
#include "Net/UnrealNetwork.h"

AMorMeal::AMorMeal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpoiled = false;
    this->NPCOwner = NULL;
}

void AMorMeal::OnRep_NPCOwner() {
}

bool AMorMeal::HasNPCOwner() const {
    return false;
}

void AMorMeal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorMeal, NPCOwner);
}


