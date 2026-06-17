#include "FGKAIPopulationManager.h"
#include "FGKAISpawnerComponent.h"
#include "Templates/SubclassOf.h"

AFGKAIPopulationManager::AFGKAIPopulationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->SpawnerComponent = CreateDefaultSubobject<UFGKAISpawnerComponent>(TEXT("SpawnerComponent"));
    this->PopulationLimit = 50;
}

void AFGKAIPopulationManager::SetPopulationLimit(int32 InMaxCount) {
}

void AFGKAIPopulationManager::OnCharacterDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

int32 AFGKAIPopulationManager::GetUnitCount() const {
    return 0;
}

int32 AFGKAIPopulationManager::GetPopulationLimit() const {
    return 0;
}


