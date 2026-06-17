#include "MorAIController.h"
#include "MorPathFollowingComponent.h"
#include "MorRecipeCostComponent.h"

AMorAIController::AMorAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->RecipeCostComponent = CreateDefaultSubobject<UMorRecipeCostComponent>(TEXT("MorRecipeCostComponent"));
    this->BreakableTargetScanDelayBase = 0.50f;
    this->BreakableTargetScanDelayFudge = 0.20f;
    this->BreakableTargetTraceAdjustment = 30.00f;
    this->SpawnerActorKey = TEXT("SpawnerActor");
    this->SpawnActionOverride = NULL;
    this->CorpseCleanupTime = 5.00f;
    this->bShouldCleanupCorpse = true;
}

void AMorAIController::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> TeamAttitude, AActor* NewTarget, AActor* OldTarget) {
}

bool AMorAIController::AssignBehaviorPoint(UMorAIBehaviorPointComponent* BehaviorPoint) {
    return false;
}


