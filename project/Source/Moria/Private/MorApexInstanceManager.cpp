#include "MorApexInstanceManager.h"

AMorApexInstanceManager::AMorApexInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PoolSize = 50;
    this->PoolScaleFactor = 0.40f;
    this->DefaultPoolSize = 50;
    this->MaxPoolSize = 200;
    this->MinPoolSize = 30;
    this->ConsolePoolSize = 25;
    this->DestructibleActorClass = NULL;
    this->BreakableBreakTime = 3.50f;
    this->ProjectileBreakTime = 2.50f;
}


