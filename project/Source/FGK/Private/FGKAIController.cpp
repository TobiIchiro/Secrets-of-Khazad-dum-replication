#include "FGKAIController.h"
#include "FGKAIPatrolComponent.h"
#include "FGKAIPerceptionComponent.h"
#include "FGKAITargetingComponent.h"
#include "FGKActorFSMComponent.h"
#include "Templates/SubclassOf.h"

AFGKAIController::AFGKAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->PerceptionComponent = CreateDefaultSubobject<UFGKAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->PossessedCharacter = NULL;
    this->BehaviorFSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("BehaviorFSMComp"));
    this->Behaviour = NULL;
    this->TargetingComponent = CreateDefaultSubobject<UFGKAITargetingComponent>(TEXT("TargetingComponent"));
    this->PatrolComponent = CreateDefaultSubobject<UFGKAIPatrolComponent>(TEXT("PatrolComponent"));
    this->BlackboardData = NULL;
    this->AttackSettings = NULL;
}

void AFGKAIController::SetGenericTeamId(const FGenericTeamId& NewTeamID) {
}

void AFGKAIController::RunBehaviorFSM() {
}

void AFGKAIController::ReplaceBehaviorState(TSubclassOf<UFGKBehaviorState> NewState) {
}

void AFGKAIController::OnCharacterDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

UFGKActorFSMComponent* AFGKAIController::GetBehaviorFSMComp() const {
    return NULL;
}


