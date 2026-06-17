#include "FGKGameState.h"
#include "ExpressionContainer.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFGKGameState::AFGKGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitializeManagersBudget = 0.00f;
    this->ExpressionContainer = CreateDefaultSubobject<UExpressionContainer>(TEXT("ExpressionContainer"));
}

void AFGKGameState::OnRep_ActiveManagers() {
}

AActor* AFGKGameState::GetManagerInternal(const TSubclassOf<AActor> ManagerClass, bool bExactMatch) {
    return NULL;
}

void AFGKGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFGKGameState, ActiveManagers);
}


