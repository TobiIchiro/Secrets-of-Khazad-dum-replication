#include "FGKAnimNotifyState_SpawnLootWhenHit.h"

UFGKAnimNotifyState_SpawnLootWhenHit::UFGKAnimNotifyState_SpawnLootWhenHit() {
    this->LootSpawnerData = NULL;
    this->RunTimeSpawner = NULL;
    this->MyMeshComp = NULL;
}

void UFGKAnimNotifyState_SpawnLootWhenHit::OnHit(AActor* Attacker) const {
}


