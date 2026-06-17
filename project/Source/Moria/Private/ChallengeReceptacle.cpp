#include "ChallengeReceptacle.h"
#include "FGKFilteredInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AChallengeReceptacle::AChallengeReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFGKFilteredInventoryComponent>(TEXT("InventoryComponent"))) {
    this->ChallengeElementId = 0;
    this->PayFrom = EInventoryQuery::Personal;
}



void AChallengeReceptacle::InventoryChanged(const FItemHandle& Item) {
}


int32 AChallengeReceptacle::GetRequiredCount() const {
    return 0;
}

int32 AChallengeReceptacle::GetMatchingCount() const {
    return 0;
}

bool AChallengeReceptacle::GetIsComplete() const {
    return false;
}


void AChallengeReceptacle::ChallengeElementIdReplicated() {
}

void AChallengeReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChallengeReceptacle, ChallengeElementId);
    DOREPLIFETIME(AChallengeReceptacle, RequiredItemCounts);
}


