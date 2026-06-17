#include "WatcherTentacleTarget.h"

FWatcherTentacleTarget::FWatcherTentacleTarget() {
    this->AttackType = EWatcherAttackType::WatcherAttackType_Melee;
    this->SourceZone = EWatcherZone::WatcherZone_Player;
    this->TargetActor = NULL;
}

