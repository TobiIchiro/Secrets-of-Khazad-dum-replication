#include "FGKDeathSpawnerComponent.h"
#include "Templates/SubclassOf.h"

UFGKDeathSpawnerComponent::UFGKDeathSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnOnDie = true;
}

void UFGKDeathSpawnerComponent::OnDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}


