#include "WormSquad.h"
#include "Perception/AIPerceptionComponent.h"
#include "Components/BoxComponent.h"

AWormSquad::AWormSquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectionVolume"));
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->EggPrefab = NULL;
    this->MaxActiveAreaRadius = 5000.00f;
    this->ProximityDistance = 500.00f;
    this->PlayerProximityDurationToSpawn = 3.00f;
    this->MaxHatchingInterval = 4.00f;
    this->MinHatchingInterval = 1.00f;
    this->MinAttackCheckInterval = 0.50f;
    this->MaxAttackCheckInterval = 1.00f;
    this->MaxMeleeAttackersPerPlayer = 4;
    this->MaxRangeAttackersPerPlayer = 4;
    this->MinMeleeAttackInterval = 5.00f;
    this->MaxMeleeAttackInterval = 0.00f;
    this->MaxMeleeAttacksNum = 3;
    this->MinTimeToHide = 5.00f;
    this->MaxTimeToHide = 10.00f;
    this->MinHidingDuration = 2.00f;
    this->MaxHidingDuration = 5.00f;
    this->ProbabilityToHideWhenDamaged = 50;
    this->ProbabilityToTeleportWhenDamaged = 20;
    this->ProbabilityToMeleeAttack = 75;
    this->ProbabilityToTeleportBeforeRangeAttack = 25;
    this->DetectionVolume->SetupAttachment(RootComponent);
}

void AWormSquad::OnActorPerceptionUpdated(const AActor* InActor, const FAIStimulus InStimulus) {
}


