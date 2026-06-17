#include "FGKCombatStatSystem.h"
#include "Templates/SubclassOf.h"

UFGKCombatStatSystem::UFGKCombatStatSystem() {
}

int32 UFGKCombatStatSystem::GetNumKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const {
    return 0;
}

int32 UFGKCombatStatSystem::GetNumKills(AFGKBaseCharacter* Attacker) const {
    return 0;
}

int32 UFGKCombatStatSystem::GetNumFinalKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const {
    return 0;
}

int32 UFGKCombatStatSystem::GetNumFinalKills(AFGKBaseCharacter* Attacker) const {
    return 0;
}

int32 UFGKCombatStatSystem::GetFriendlyNumKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const {
    return 0;
}

int32 UFGKCombatStatSystem::GetFriendlyNumKills(AFGKBaseCharacter* Attacker) const {
    return 0;
}

UFGKCombatStatSystem* UFGKCombatStatSystem::GetCombatStatSystem(const UObject* WorldContext) {
    return NULL;
}


